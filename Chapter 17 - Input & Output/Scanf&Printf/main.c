#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char str[100];
    int i;
    printf("Enter A Value :");
    scanf("%s %d", str, &i);
    printf("\nYou Entered : %s %d", str, i);
    return (EXIT_SUCCESS);
}

