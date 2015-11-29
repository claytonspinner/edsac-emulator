#include "main.h"

SDL_Window* gWindow = NULL;
SDL_Surface* gSurface = NULL;
SDL_Surface* gHelloWorld = NULL;

int main( int argc, char* args[] )
{
    if (argc || args) {

    }
    char str[10] = {0};
    char arr[10] = {0};

    if ( !init() ) {
        printf( "Failed to initialize!\n" );
    }
    else {
        if ( !loadMedia() ) {
            printf( "Failed to load media!\n" );
        } else {
            SDL_BlitSurface( gHelloWorld, NULL, gSurface, NULL );
            SDL_UpdateWindowSurface( gWindow );
            SDL_Delay( 2000 );
        }
    }
    loadCharArrayFromFile("test_program.txt", arr);

    strcpy(str, arr);
    printf(str);
    printf("\n");

    destroy();
    return 0;
}

bool init() {
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );\
		success = false;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Get window surface
            gSurface = SDL_GetWindowSurface( gWindow );
        }
    }
    return success;
}

bool loadMedia() {
    bool success = true;
    SDL_Surface* helloWorld = NULL;

    SDL_RWops *rwop;
    rwop = SDL_RWFromFile( "02-EX1.bmp", "rb" );

    gHelloWorld = IMG_LoadBMP_RW( rwop );
    //helloWorld = IMG_LoadJPG_RW( rwop );
    if ( gHelloWorld == NULL ) {
        printf( "Unable to load image %s! SDL Error: %s\n", "test_image.jpg", SDL_GetError() );
        success = false;
    }
    return success;
}

// Don't name this close() - http://cboard.cprogramming.com/game-programming/162620-sdl-code-generating-segmentation-fault.html
void destroy() {
    SDL_FreeSurface( gHelloWorld );
    gHelloWorld = NULL;

    SDL_FreeSurface( gSurface );
    gSurface = NULL;

    SDL_DestroyWindow( gWindow );
    gWindow = NULL;

    SDL_Quit();
}