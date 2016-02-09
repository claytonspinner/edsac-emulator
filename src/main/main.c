#include "main.h"

int main( int argc, char* argv[] )
{
    struct Cpu cpu;
    memset(&cpu, 0, sizeof(cpu));
    load(&cpu, argc > 1 ? argv[1] : "out.hex");

    dumpheader();
    for (;;) {
//        dumpstate(&cpu);
        step(&cpu);
    }
    return 0;
}

void load(struct Cpu *cpu, const char *fileName) {
    FILE *filePointer;
    char buffer[128];
    uint16_t n = 0;
    if (!(filePointer = fopen(fileName, "r"))) {
        fprintf(stderr, "cannot open: %s\n", fileName);
        exit(1);
    }
    while (!feof(filePointer) && fgets(buffer, 128, filePointer)) {
        if (!isalnum(buffer[0]))
            continue;
        cpu->memory[n++] = strtoul(buffer, 0, 16);
    }
    fprintf(stderr, "< LOADED %d WORDS >\n", n);
    fclose(filePointer);
}

void dumpheader(void) {
    fprintf(stderr,
        "SCR    OT    MPR   MPC   ACC   Instruction\n"
        "----- ----- ----- ----- ----- -----------\n");
}

void dumpstate(struct Cpu *cpu) {
    char out[128];
    disassemble(cpu->memory + cpu->scr, out);
    fprintf(stderr,
        "%04x %04x %04x %04x %04x %s\n",
        cpu->scr, cpu->orderTank,
        cpu->multiplier, cpu->multiplicand,
        cpu->accumulator, out);
}
