#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* an array with 5 elements */
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i;
    
    p = balance; /*Storing first value of balance array(1000.0) in p*/
    
    /* output each array element's value */
    printf("Array Values Using Pointer \n");
    
    for(i = 0; i <5; i++){
        printf("*(p + [%d]) : %f \n", i, *(p + i));
    }
    
    printf("Array Values Using Balance As Address \n");
    
    for(i = 0; i <5; i++){
        printf("*(balance + [%d]) : %f \n", i, *(balance + i));
    }
    return (EXIT_SUCCESS);
}

