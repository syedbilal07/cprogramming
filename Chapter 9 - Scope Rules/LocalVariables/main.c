#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable declaration */
    int a;
    int b;
    int c;
    /* actual initialization */
    a = 100;
    b = 200;
    c = a + b;
    printf("Value Of a Is : %d\nValue Of b Is : %d\nSum Of a & b Is : %d",a,b,c);
    return (EXIT_SUCCESS);
}