#ifndef CPU_H
#define CPU_H
#include <stdio.h>

struct Cpu {
    // Each entry maps to an 18-bit word of the EDSAC memory
    unsigned int  memory[1024];
    
    // Sequence Control Register (Program Counter)
    // Limit: 1024
    unsigned int scr;

    unsigned int orderTank;
 
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
} Cpu;

int step(struct *Cpu cpu, char opCode, int value);

// Control instructions

// T
unsigned int transferClear(unsigned int address);

// U
unsigned int transfer(unsigned int address);

// E
unsigned int jumpPositive(long double accumulator);

// G
unsigned int jumpNegative(long double accumulator);

// I
unsigned int readChar(char character);

// O
unsigned int printChar(unsigned int address);

// F
void readLast(unsigned int something);

// X
void noOp(void);

// Z
void stop(void);

#endif /* CPU_H */
