#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    /* check the boolean condition */
    if(a < 20){
        /* if condition is true then print the following */
        printf("a is less than 20 \n");
    }
    else{
        /* if condition is false then print the following */
        printf("a is not less than 20 \n");
    }
    printf("value of a is %d",a);
    return (EXIT_SUCCESS);
}

