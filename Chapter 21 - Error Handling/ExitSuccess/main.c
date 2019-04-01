#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int divident = 25;
    int divisor = 5;
    int quotient;
    
    if(divisor == 0){
        fprintf(stderr, "Divison By Zero! Exiting....");
        exit(EXIT_FAILURE);
    }
    else{
    quotient = divident / divisor;
    fprintf(stderr,"Value Of Quotient Is : %d \n", quotient);
    exit(EXIT_SUCCESS);
    }
}

