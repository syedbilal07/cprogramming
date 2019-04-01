#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(int argc, char** argv) {
    printf("Max Between 10 & 20 Is : %d \n", MAX(10,20));
    return (EXIT_SUCCESS);
}

