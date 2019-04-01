#include <stdio.h>
#include <stdlib.h>

int factorial(unsigned int i){
    if(i <= 1){
        return 1;
    }
    return i * factorial(i - 1);
}

int main(int argc, char** argv) {
    int i = 15;
    printf("Factorial Of %d Is : %d \n",i, factorial(i));
    return (EXIT_SUCCESS);
}

