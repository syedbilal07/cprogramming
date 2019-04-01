#include <stdio.h>
#include <stdlib.h>

int const MAX = 3;

int main(int argc, char** argv) {
    int  var[] = {10, 100, 200};
    int i, *ptr;
    /* let us have array address in pointer */
    ptr = &var[MAX-1];
    for(i = MAX; i > 0; i--){
        printf("Address Of var[%d] Is : %x \n", i-1, ptr);
        printf("Value Of var[%d] Is : %d \n", i-1, *ptr);
        ptr--;
    }
    return (EXIT_SUCCESS);
}

