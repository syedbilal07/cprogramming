#include <stdio.h>
#include <stdlib.h>

/* function to generate and retrun random numbers. */
int * getRandom(){
    static int r[10];
    int i;
    
    /* set the seed */
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; ++i){
        r[i] = rand();
        printf("%d \n", r[i]);
    }
    return r;
}
/* main function to call above defined function */
int main(int argc, char** argv) {
    /* a pointer to an int */
    int *p;
    int i;
    
    p = getRandom();
    for(i = 0; i < 10; ++i){
        printf("*(p + [%d]) : %d \n", i, *(p + i));
    }
    return (EXIT_SUCCESS);
}

