#include <stdio.h>
#include <stdlib.h>

/* global variable declaration */
int a = 20;

int main(int argc, char** argv) {
    /* local variable declaration in main function */
    int a = 10;
    int b = 20;
    int c = 0;
    printf("Value Of a In main : %d\n", a);
    c = sum(a,b);
    printf("Value Of c In main : %d\n", c);
    return (EXIT_SUCCESS);
}
/* function to add two integers */
int sum(int a, int b){
    printf("Value Of a In sum() : %d\n", a);
    printf("Value Of b In sum() : %d\n", b);
    return a + b;
}

