#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    const int length = 10;
    const int width = 5;
    const char newline = '\n';
    int area;
    area = length * width;
    
    printf("Area Is : %d \n", area);
    printf("%c", newline);
    return (EXIT_SUCCESS);
}

