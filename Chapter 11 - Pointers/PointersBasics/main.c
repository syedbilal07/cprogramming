#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int myvar;
    char var[20];
    printf("Address of myvar Is : %x \n", &myvar);
    printf("Address of var Is : %x \n", &var);
    return (EXIT_SUCCESS);
}

