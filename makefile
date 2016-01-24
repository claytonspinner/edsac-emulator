#OBJS specifies which files to compile as part of the project

SDL_ROOT_DIR = /usr/local

OBJS = src/main/*.c

CC = gcc

COMPILER_FLAGS = `$(SDL_ROOT_DIR)/bin/sdl2-config --cflags` \
                 -w -g -Wall -Wextra

LINKER_FLAGS = `$(SDL_ROOT_DIR)/bin/sdl2-config --libs` \
               -lSDL2 -lSDL2_image

OBJ_NAME = edsac-emulator

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
