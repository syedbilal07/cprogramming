#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    /* local variable definition */
    char grade = 'b';
    
    switch(grade){
        case 'a':
            printf("Excellent \n");
            break;
        case 'b':
        case 'c':
            printf("Well Done \n");
            break;
        case 'd':
            printf("Nice \n");
            break;
        case 'f':
            printf("Better Luck Next Time");
            break;
        case 'u':
            printf("You Have Failed");
            break;
        default:
            printf("Invalid Grade");           
    }
    printf("your grade is %c\n", grade);
    return (EXIT_SUCCESS);
}

