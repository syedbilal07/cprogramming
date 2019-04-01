#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char name[100];
    char *description;
    
    strcpy(name, "Syed Bilal");
    description = malloc(30 * sizeof(char));
    if(description == NULL){
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else{
        strcpy( description, "Syed Bilal is an Aptech student.");
    }
    /* suppose you want to store bigger description */
    description = realloc(description, 100 * sizeof(char));
    if(description == NULL){
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else{
        strcat( description, "He Is In 2nd Semester");
    }
    printf("Name : %s\n", name);
    printf("Description : %s \n", description);
    free(description);
    return (EXIT_SUCCESS);
}

