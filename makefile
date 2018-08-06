ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)
endif
ifeq ($(OSTYPE),)
	OSTYPE := $(shell uname -s | awk -F_ '{print $$1}' | tr A-Z a-z)
endif

CC:=g++
CFLAGS:=
SOURCES:=
INCLUDES:= -Iinclude
BUILD_DIR:=./build
#BIN:=$(BUILD_DIR)/screend

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
include screend/makefile

all : $(SOURCES) $(SCREEND_BIN)

#$(BIN) : $(SOURCES) $(CORE_SRC)
#	$(CC) $(SOURCES) $(CORE_SRC) $(RENDERER_SRC)  $(INCLUDES) $(CFLAGS) -o $(BIN)
