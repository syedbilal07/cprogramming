#include <stdio.h>
#include <stdlib.h>
#define message_for(a,b) \
printf(#a " and " #b ": We Love You ! \n");

int main(int argc, char** argv) {
    message_for(Bilal,Saadi);
    return (EXIT_SUCCESS);
}

