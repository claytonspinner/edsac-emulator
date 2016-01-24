#include "cpu.h"

int step(char opCode, int value) {
    switch(opCode) {
        // Addition: add number in memory location {value} to accumulator
        case 'A':
            break;
        // Subtraction: subtract number in memory location {value} from accumulator
        case 'S':
            break;
        // Copy: copy number in memory location {value} to multiplier
        case 'H':
            break;
        // Multiply & Add: multiply number in memory location {value} by number
        // in multiplier and add product to accumulator
        case 'V':
            break;
        // Multiply & Subtract: multiply number in memory location {value} by number
        // in multiplier and subtract product from accumulator
        case 'N':
            break;
        // Transfer & Clear: transfer the contents of accumulator to memory location {value}
        // and clear accumulator
        case 'T':
            break;
        // Transfer: transfer the contents of accumulator to memory location {value}
        case 'U':
            break;
        // Collate (logical AND): logical AND contents of memory location {value} with
        // contents of multiplier and add result to accumulator
        case 'C':
            break;
        // Shift Right: shift contents of accumulator {value} bits to the right
        case 'R':
            break;
        // Shift Left: shift contents of accumulator {value} bits to the left 
        case 'L':
            break;
        // Jump If Positive: if the number in the accumulator is positive jump to
        // memory location {value} 
        case 'E':
            break;
        // Jump If Negative: if the number in the accumulator is negative jump to
        // memory location {value} 
        case 'G':
            break;
        // Read: read the next character and store as least significant 5 bits of
        // memory location {value}
        case 'I':
            break;
        // Print: print the character in most significant 5 bits of memory location {value}
        case 'O':
            break;
        // Read Last: read the last character output for verification
        case 'F':
            break;
        // No Operation: no operation
        case 'X':
            break;
        // Round: round number in accumulator to 34 bits
        case 'Y':
            break;
        // Stop: stop
        case 'Z':
            break;
        
        default:
            break;
    }
}
