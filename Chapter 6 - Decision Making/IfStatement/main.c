#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 10;
    if(a < 20){
        printf("value of a is less than 20\n");
    }
    printf("exact value of a is %d", a);
    return (EXIT_SUCCESS);
}