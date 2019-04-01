#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* define simple structure */
struct{
    unsigned int widthValidated; // 4 bytes
    unsigned int heightValidated; // 4 bytes total = 8 bytes !
} status1;
/* define a structure with bit fields */
struct{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main(int argc, char** argv) {
    printf("Memory Size Occupied By Status1 : %d \n", sizeof(status1));
    printf("Memory Size Occupied By Status2 : %d \n", sizeof(status2));
    return (EXIT_SUCCESS);
}

