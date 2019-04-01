#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char** argv) {
    int divident = 20;
    int divisor = 0;
    int result;
    if(divisor == 0){
        fprintf(stderr, "Division By Zero! Exiting....");
        exit(-1);
    }
    else{
    result = divident/divisor;
    fprintf(stderr, "Value Of Quotient Is : %d \n", result);
    return (EXIT_SUCCESS);
    }
}

