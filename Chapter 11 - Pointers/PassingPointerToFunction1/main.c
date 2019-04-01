#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main(int argc, char** argv) {
    unsigned long sec;
    getSeconds(&sec);
    /* print the actual value */
    printf("Number of seconds: %d\n", sec );
    return (EXIT_SUCCESS);
}

void getSeconds(unsigned long *par){
    /* get the current number of seconds */
    *par = time(NULL);
    return;
}

