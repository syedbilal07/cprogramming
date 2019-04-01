#include <stdio.h>
#include <stdlib.h>

/* global variable declaration & initialization */
int g = 200;

int main(int argc, char** argv) {
    /* local variable declaration & initialization */
    int g = 100;
    printf("Value Of g Is : %d",g);
    return (EXIT_SUCCESS);
}

