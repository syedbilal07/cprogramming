#include <stdio.h>
#include <stdlib.h>

const int MAX = 3;

int main(int argc, char** argv) {
    int arr[] = {10,100,200};
    int i;
    for(i = 0; i < MAX; i++){
        printf("Value Of var[%d] Is : %d \n", i, arr[i]);
    }
    return (EXIT_SUCCESS);
}

