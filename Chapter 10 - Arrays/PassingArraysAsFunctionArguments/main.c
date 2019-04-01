#include <stdio.h>
#include <stdlib.h>

/* function declaration */
double getAverage(int size, int arr[]);

int main(int argc, char** argv) {
    /* an int array with 5 elements */
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    /* pass pointer to the array as an argument */
    avg = getAverage(5, balance);
    /* output the returned value */
    printf("Average Value Is : %f \n", avg);
    return (EXIT_SUCCESS);
}

double getAverage(int size, int arr[]){
    int i;
    double avg;
    double sum = 0;
    
    for(i = 0; i < size; ++i){
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
