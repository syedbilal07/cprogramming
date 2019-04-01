#include <stdio.h>
#include <stdlib.h>

int count;
extern void write_extern();

int main(int argc, char** argv) {
    count = 5;
    write_extern();
    return (EXIT_SUCCESS);
}

