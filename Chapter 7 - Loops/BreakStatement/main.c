#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = 10;
    while(a < 20){
        printf("value of a is : %d \n", a);
        a++;
        if(a > 15){
            break;
        }
    }
    return (EXIT_SUCCESS);
}

