# MICROMOUSE SIMULATOR MAKEFILE

# Compiler
CC = gcc

# Define
DEBUG = -g -DDEBUG
UNIT = -DUNIT

# Compiler Flags
CF = -c -ansi -std=c99 -Wall

# Linker Flags
LF = -Wall


# Targets

all: simulator simulator_debug

clean:
	rm *.o


# Compile

# Unit Tests

GUI_unit.o: GUI.c GUI.h
	$(CC) $(CF) $(DEBUG) $(UNIT) GUI.c -o GUI_unit.o


# Link

GUI_unit: GUI_unit.o
	$(CC) $(LF) GUI_unit.o -o GUI_unit




# EOF
