#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int var = 20; /* actual variable declaration */
    int *ip; /* pointer variable declaration */
    ip = &var; /* store address of var in pointer variable*/
    
    printf("Address Of var Variable Is : %p \n", &var);
    /* address stored in pointer variable */
    printf("Address Of ip Variable Is : %p \n", ip);
    /* access the value using the pointer */
    printf("Value Of var Variable Is : %d \n", *ip);
    return (EXIT_SUCCESS);
}

