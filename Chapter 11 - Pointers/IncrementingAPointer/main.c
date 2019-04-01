#include <stdio.h>
#include <stdlib.h>

const int MAX = 3;

int main(int argc, char** argv) {
    int var[] = {10,100,200};
    int i, *ptr;
    /* let us have array address in pointer */
    ptr = &var;
    for(i = 0; i < MAX; i++){
        printf("Address Of var[%d] Is : %x \n", i, ptr);
        printf("Value Of var[%d] Is : %d \n", i, *ptr);
        /* move to the next location */
        ptr++;
    }
    return (EXIT_SUCCESS);
}