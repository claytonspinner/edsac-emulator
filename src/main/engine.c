#include "engine.h"

void engine(struct Cpu cpu, const int TICKS) {
    time_t time;
    struct timespec spec;

    int next_game_tick = getTickCount(spec).tv_sec;
    int sleep_time = 0;

    printf("Before Loop\n");
    printf("Also before loop\n");
    printf("CPU scr value: %d\n",cpu.scr);
    printf("Next Game Tick: %d\n", next_game_tick);
    bool running = true;

    while( running ) {
        //update_game();
        //display_game();
        printf("Updating\n");

        next_game_tick += TICKS;
        sleep_time = next_game_tick - getTickCount(spec).tv_sec;
        sleep_time = next_game_tick - 5;
        if( sleep_time >= 0 ) {
            sleep( sleep_time );
        }
        else {
        }
    }
}

struct timespec getTickCount(struct timespec spec) {
    clock_gettime(CLOCK_REALTIME, &spec);
    return spec;
}
