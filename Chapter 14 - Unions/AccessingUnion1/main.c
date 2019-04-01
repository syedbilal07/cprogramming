#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main(int argc, char** argv) {
    union Data data;
    data.i = 20;
    data.f = 30;
    strcpy(data.str, "C Programming");
    
    printf("The data.i Is : %d \n", data.i);
    printf("The data.f Is : %f \n", data.f);
    printf("The data.str Is : %s \n", data.str);
    
    /*Here, we can see that the values of i and f members of union got corrupted because the final value
     *  assigned to the variable has occupied the memory location and this is the reason that the value of str
     *  member is getting printed very well.*/
    return (EXIT_SUCCESS);
}

