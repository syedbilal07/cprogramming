#include <stdio.h>
#include <stdlib.h>
/* function definition to swap the values */
void swap(int *x, int *y){
    int temp;
    temp = *x; /* save the value at address x */
    *x = *y; /* put y into x */
    *y = temp; /* put temp into y */
    return;
}
int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    int b = 200;
    printf("Before Swap, Value Of a Is : %d\n", a);
    printf("Before Swap, Value Of b Is : %d\n", b);
    /* calling a function to swap the values */
    swap(&a, &b);
    printf("After Swap, Value Of a Is : %d\n", a);
    printf("After Swap, Value Of b Is : %d\n", b);
    return (EXIT_SUCCESS);
}

