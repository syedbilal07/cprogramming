#include <stdio.h>
#include <stdlib.h>

struct{
    unsigned int age : 3;
} Age;

int main(int argc, char** argv) {
    Age.age = 4;
    printf( "Size Of Age : %d\n", sizeof(Age) );
    printf( "Age.age : %d\n", Age.age );
    
    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );

    Age.age = 8;
    printf( "Age.age : %d\n", Age.age );
    return (EXIT_SUCCESS);
}

