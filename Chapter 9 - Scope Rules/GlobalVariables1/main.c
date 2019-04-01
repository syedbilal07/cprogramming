#include <stdio.h>
#include <stdlib.h>

/* global variable declaration */
int g;

int main(int argc, char** argv) {
    /* local variable declaration */
    int a;
    int b;
    /* actual initialization */
    a = 100;
    b = 200;
    g = a + b;
    printf("Value Of a Is : %d\nValue Of b Is : %d\nSum Of a & b Is : %d",a,b,g);
    return (EXIT_SUCCESS);
}

