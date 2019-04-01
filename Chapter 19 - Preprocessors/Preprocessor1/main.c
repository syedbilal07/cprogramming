#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Date : %s \n", __DATE__);
    printf("File : %s \n", __FILE__);
    printf("Time : %s \n", __TIME__);
    printf("Line : %d \n", __LINE__);
    printf("ANSI : %d \n", __STDC__);
    return (EXIT_SUCCESS);
}

