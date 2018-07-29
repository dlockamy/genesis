ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)
endif
ifeq ($(OSTYPE),)
	OSTYPE := $(shell uname -s | awk -F_ '{print $$1}' | tr A-Z a-z)
endif

CC:=gcc
CFLAGS:=
SOURCES:=main.cpp
BIN:=screend

ifeq ($(OSTYPE),darwin) 
CFLAGS =  -F/Library/Frameworks -framework SDL2
endif

include audio/makefile
include core/makefile
include network/makefile
include renderer/makefile

all : $(SOURCES) $(BIN)

screend: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(BIN)
