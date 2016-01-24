#ifndef MAIN_H
#define MAIN_H
//Using SDL and standard IO
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <stdbool.h>
#include "fileutils.h"
#include "cpu.h"
#include "engine.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

const int TICKS = 10;

bool init();

bool loadMedia();

void destroy();

#endif /* MAIN_H */
