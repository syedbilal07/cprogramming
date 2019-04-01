#include <stdio.h>
#include <stdlib.h>

union Data{
    int i;
    float f;
    char c[20];
} data;

int main(int argc, char** argv) {
    data.i = 20;
    printf("data.is : %d \n", data.i);
    
    data.f = 30;
    printf("data.f Is : %f \n", data.f);
    
    strcpy(data.c, "C Programming");
    printf("data.c Is : %s \n", data.c);
    /*Here, all the members are getting printed very well because one member is being used at a time.*/
    return (EXIT_SUCCESS);
}

