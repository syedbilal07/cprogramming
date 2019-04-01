#include <stdio.h>
#include <stdlib.h>

/* function declaration */
void func(void);
/* global variable */
static int count = 5;

int main(int argc, char** argv) {
    while(count--){
        func();
    }
    return (EXIT_SUCCESS);
}
/* function definition */
void func(void){
    /* local static variable */
    static int i = 5;
    i++;
    printf("i is %d and count is %d\n", i, count);
}

