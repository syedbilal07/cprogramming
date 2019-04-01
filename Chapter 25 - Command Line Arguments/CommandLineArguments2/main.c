#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Program Name : %s \n", argv[0]);
    if(argc == 2){
        printf("The Argument Supplied Is : %s \n", argv[1]);
    }
    else if(argc > 2){
        printf("Too many arguments supplied.\n");
    }
    else{
        printf("One argument expected.\n");
    }
    return (EXIT_SUCCESS);
}

