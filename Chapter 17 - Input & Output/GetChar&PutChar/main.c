#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int c;
    printf("Enter A Value : \n");
    c = getchar();
    printf("You Have Entered: \n");
    putchar(c);
    return (EXIT_SUCCESS);
}

