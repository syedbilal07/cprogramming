#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    int b = 200;
    /* check the boolean condition */
    if(a == 100){
        /* if condition is true then check the following */
        if(b == 200){
            /* if condition is true then print the following */
            printf("value of a is 100 & value of b is 200 \n");
        }
    }
    printf("exact value of a is %d\n", a);
    printf("exact value of b is %d", b);
    return (EXIT_SUCCESS);
}

