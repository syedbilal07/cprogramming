#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = 10;
    do{
        printf("value of a is : %d \n",a);
        a++;
    }
    while(a < 20);
    return (EXIT_SUCCESS);
}

