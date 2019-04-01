#include <stdio.h>
#include <stdlib.h>
#define tokenpaster(n) printf("token : " #n " = %d", token##n);

int main(int argc, char** argv) {
    int token32 = 40;
    tokenpaster(32);
    return (EXIT_SUCCESS);
}

