#include <stdio.h>
#include <stdlib.h>

#if !defined (MESSAGE)
#define MESSAGE "You Wish!"
#endif

int main(int argc, char** argv) {
    printf("Here Is The Message : %s \n", MESSAGE);
    return (EXIT_SUCCESS);
}

