#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    /* check the boolean condition */
    if(a == 10){
        /* if condition is true then print the following */
        printf("value of a is 10\n");
    }
    else if(a == 20){
        /* if else if condition is true */
        printf("value of a is 20 \n");
    }
    else if(a == 30){
        /* if else if condition is true */
        printf("value of a is 30 \n");
    }
    else{
        /* if none of the conditions is true */
        printf("None of the values are matching \n");
    }
    printf("exact value of a is %d", a);
    return (EXIT_SUCCESS);
}

