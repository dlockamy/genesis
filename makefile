ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)
endif
ifeq ($(OSTYPE),)
	OSTYPE := $(shell uname -s | awk -F_ '{print $$1}' | tr A-Z a-z)
endif

CC:=g++
CFLAGS:=
SOURCES:=main.cpp
INCLUDES:= -Iinclude
BIN:=screend

ifeq ($(OSTYPE),darwin) 
CFLAGS =  -F/Library/Frameworks -framework SDL2
endif

ifeq ($(OSTYPE),linux)
CFLAGS += -w -lSDL2 
endif

include audio/makefile
include core/makefile
include network/makefile
include renderer/makefile

all : $(SOURCES) $(BIN)

screend: $(SOURCES) $(CORE_SRC)
	$(CC) $(SOURCES) $(CORE_SRC)  $(INCLUDES) $(CFLAGS) -o $(BIN)
