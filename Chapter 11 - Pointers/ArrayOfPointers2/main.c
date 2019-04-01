#include <stdio.h>
#include <stdlib.h>

const int MAX = 3;

int main(int argc, char** argv) {
    int var[] = {10,100,200};
    int i, *ptr[MAX];
    
    for(i = 0; i < MAX; i++){
        ptr[i] = &var[i]; /* assign the address of integer. */
    }
    
    for(i = 0; i < MAX; i++){
        printf("Value Of var[%d] Is : %d \n", i, *ptr[i]);
    }
    return (EXIT_SUCCESS);
}

