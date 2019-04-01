#include <stdio.h>
#include <stdlib.h>

int fibonaci(int i){
    if(i == 0){
        return 0;
    }
    if(i == 1){
        return 1;
    }
    return fibonaci(i - 1) + (i -2);
}

int main(int argc, char** argv) {
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\t\n", fibonaci(i));
    }
    return (EXIT_SUCCESS);
}