#ifndef CPU_H
#define CPU_H
#include <stdio.h>

struct Cpu {
    // Each entry maps to an 18-bit word of the EDSAC memory
    unsigned int  memory[1024];
    
    // Sequence Control Register (Program Counter)
    // Limit: 1024
    unsigned int scr;
 
    /* There are four number formats. Each is signed.
       Short integer   17 bits
       Long integer    35 bits
       Short Fraction  17 bits
       Long Fraction   35 bits

       The multiplier and multiplicand have 35 bits each.
       The accumulator has 71 bits.
    */
    signed long multiplier;
    signed long multiplicand;
    long double accumulator;
};

int step(char opCode, int value);

#endif /* CPU_H */
