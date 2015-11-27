#OBJS specifies which files to compile as part of the project
OBJS = main.c

CC = g++

#COMPILER_FLAGS = -w

LINKER_FLAGS = -lSDL2

OBJ_NAME = edsac-emulator

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
