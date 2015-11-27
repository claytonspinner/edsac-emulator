#OBJS specifies which files to compile as part of the project
OBJS = main.c

CC = gcc

COMPILER_FLAGS = -w -g -Wall -Wextra

LINKER_FLAGS = -lSDL2 -lSDL2_image

OBJ_NAME = edsac-emulator

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
