#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char name[100];
    char *description;
    
    strcpy(name, "Syed Bilal");
    /* allocate memory dynamically */
    description = malloc(200 * sizeof(char));
    if(description == NULL){
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else{
        strcpy( description, "Syed Bilal is an Aptech student Of 2nd Semester");
    }
    printf("Name : %s\n", name);
    printf("Description : %s \n", description);
    return (EXIT_SUCCESS);
}

