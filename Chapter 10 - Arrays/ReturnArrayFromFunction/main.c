#include <stdio.h>
#include <stdlib.h>

/* function to generate and return random numbers */
int * getRandom(){
    int i;
    static int r[10];
    
    /* set the seed */
    srand((unsigned)time(NULL));
    
    for(i = 0; i < 10; ++i){
        r[i] = rand();
        printf("r[%d] = %d \n", i, r[i]);
    }
    return r;
}

int main(int argc, char** argv) {
    /* a pointer to an int */
    int *p;
    int i;
    
    p = getRandom();
    
    for(i = 0; i < 10; ++i){
        printf("*(p + %d) : %d \n", i , *(p +i));
    }
    return (EXIT_SUCCESS);
}

