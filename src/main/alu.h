#ifndef ALU_H
#define ALU_H

/* Arithmetic instructions.
 *
 * When operations act on a register, the function will return the resulting value of the register.*/

// A
long double add(long double accumulator, unsigned int address);

// S
long double subtract(long double accumulator, unsigned int address);

// V
long double multiplyAdd(signed long multiplier, unsigned int address);

// N
long double multiplySubtract(signed long multiplier, unsigned int address);

// C
long double logicalAnd(signed long multiplier, unsigned int address);

// R
long double shiftRight(long double accumulator);

// L
long double shiftLeft(long double accumulator);

// Y
long double round(long double accumulator);

#endif /* ALU_H */
