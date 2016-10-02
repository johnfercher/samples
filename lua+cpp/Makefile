#MIT License
#
#Copyright (c) 2016 Johnathan Fercher
#
#Permission is hereby granted, free of charge, to any person obtaining a copy
#of this software and associated documentation files (the "Software"), to deal
#in the Software without restriction, including without limitation the rights
#to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#copies of the Software, and to permit persons to whom the Software is
#furnished to do so, subject to the following conditions:
#
#The above copyright notice and this permission notice shall be included in all
#copies or substantial portions of the Software.

CCX = g++ -std=c++11 -w


INCLUDES = -Isrc 

LIBRARIES_LUA = -llua

LIBRARIES = $(LIBRARIES_LUA) -pthread -lm -w



SRC := $(shell find -name '*.cpp')
FILE_NAMES_SRC = $(SRC:.cpp=.o)

PROTOS := $(shell find -name '*.cc')
FILE_NAMES_PROTOS = $(PROTOS:.cc=.o)

FILE_NAMES = $(FILE_NAMES_SRC) $(FILE_NAMES_PROTOS) 



RELEASE = lua-example
DEBUG = lua-example-debug

.cpp.o:
	@$(CCX) $(INCLUDES) $(LIBRARIES) -Wall -Wformat -ffast-math -c -o $@ $< -w

.cc.o:
	@$(CCX) $(INCLUDES) $(LIBRARIES) -Wall -Wformat -ffast-math -c -o $@ $< -w

all: message_compiling $(RELEASE)
	@echo Done ...
	
message_compiling:
	@echo Compiling lua-example ...

message_cleaning:
	@echo Cleaning lua-example ...

run:
	./$(RELEASE)

$(RELEASE): $(FILE_NAMES)
	@$(CCX) -o $(RELEASE) $(FILE_NAMES) $(LIBRARIES) $(INCLUDES)

build_debug: 
	$(CCX) -g $(shell find -name '*.cpp') $(shell find -name '*.cc') $(LIBRARIES) $(INCLUDES) -o $(DEBUG)

clean: message_cleaning
	@rm $(RELEASE) $(FILE_NAMES)

proto:
	cd src/VSS-Interface/protos && make -f protos.make

help: 
	./$(EXEC) -h
#teste: 
#	$(SRC)

