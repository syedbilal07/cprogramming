#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    int b = 200;
    switch(a){
        case 100:
            printf("this is part of outer switch\n");
            switch(b){
                case 200:
                    printf("this is part of inner switch\n");
                    break;
            }
    }
    printf("exact value of a is %d\n",a);
    printf("exact value of b is %d",b);
    return (EXIT_SUCCESS);
}

