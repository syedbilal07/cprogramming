#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data{
    int no;
    char character[20];
    float result;
} data;

int main(int argc, char** argv) {
    printf("The Size Of Union Is : %d \n", sizeof(data)); // 20
    return (EXIT_SUCCESS);
}

