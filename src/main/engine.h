#ifndef ENGINE_H
#define ENGINE_H
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include "cpu.h"

void testFunction(void);
struct timespec getTickCount(struct timespec spec);
#endif /* ENGINE_H */
