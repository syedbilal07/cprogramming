#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char str[100];
    printf("Enter A Sentence : \n");
    gets(str);
    printf("You Entered : \n");
    puts(str);
    return (EXIT_SUCCESS);
}

