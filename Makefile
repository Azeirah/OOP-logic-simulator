# usage:
# `make` to build.
# `make clean` to remove build files, namely, the output.bin file and all .o files
#
# Use `make -j4` for threaded building. A good default value to pick for -j is number of cores in your system * 2


# This makefile has two useful features
# 1. It allows parallel compilation (-j4)
# 2. It uses caching, whenever you change a file, it will only recompile that file


# compiler = g++
CC = g++
# compiler flags
# -g is debug symbols
# this makes caching possible (only recompile changed files)
# -Wall and -Wextra give extra warnings..
# use C++14 standard, gives access to some nice additional features
CC_FLAGS = -g -Wall -Wextra
# Linker flags
# -g is debug symbols
LD_FLAGS = -g
# All source files
# Name of resulting executable
EXEC = oop.bin

# Collect all source directories here
SOURCES = $(wildcard src/*.cpp src/Nodes/Gates/*.cpp src/Nodes/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# All library dependencies (none for now)
LIBS =

all: $(OBJECTS)
	$(CC) $(CC_FLAGS) $(LD_FLAGS) $(OBJECTS) $(LIBS) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm $(OBJECTS) $(EXEC)
