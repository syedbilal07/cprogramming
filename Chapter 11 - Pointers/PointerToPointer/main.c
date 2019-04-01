#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int var;
    int *ptr;
    int **pptr;
    
    var = 3000;
    
    /* take the address of var */
    ptr = &var;
    
    /* take the address of ptr using address of operator & */
    pptr = &ptr;
    
    /* take the value using pptr */
    printf("Value Of var Is : %d \n", var);
    printf("Value available at *ptr : %d \n", *ptr);
    printf("Value available at **pptr : %d \n", **pptr);
    return (EXIT_SUCCESS);
}

