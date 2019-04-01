#include <stdio.h>
#include <stdlib.h>

#define length 10
#define width 5
#define newline '\n'
int main(int argc, char** argv) {
    int area;
    area = length * width;
    printf("The Area Is : %d \n", area);
    printf("%c", newline);
    return (EXIT_SUCCESS);
}

