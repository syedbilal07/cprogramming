#include <stdio.h>
#include <stdlib.h>

/* function declaration */
int max(int num1,int num2);

int main(int argc, char** argv) {
    /* local variable definition */
    int a = 100;
    int b = 200;
    int ret;
    /* calling a function to get max value */
    ret = max(a,b);
    printf("max value is : %d\n",ret);
    return (EXIT_SUCCESS);
}
/* function returning the max between two numbers */
int max(int num1, int num2){
    /* local variable declaration */
    int result;
    if(num1 > num2){
        result = num1;
    }
    else{
        result = num2;
    }
    return result;
}
