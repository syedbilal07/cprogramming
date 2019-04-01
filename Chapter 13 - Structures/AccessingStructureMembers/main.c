#include <stdio.h>
#include <stdlib.h>

struct Book{
    char author[50];
    char subject[50];
    char title[50];
    int book_id;
};

int main(int argc, char** argv) {
    struct Book Book1; /* Declare Book1 of type Book */
    struct Book Book2; /* Declare Book2 of type Book */
    /* book 1 specification */
    strcpy(Book1.author, "Dennis Ritchie");
    strcpy(Book1.subject, "Fundamentals Of C");
    strcpy(Book1.title, "C Programming");
    Book1.book_id = 1;
    /* book 1 specification */
    strcpy(Book2.author, "Dennis Ritchie");
    strcpy(Book2.subject, "Objectives Of C");
    strcpy(Book2.title, "C Programming Tutorials");
    Book2.book_id = 2;
    /* print Book1 info */
    printf("Author Is : %s \n", Book1.author);
    printf("Subject Is : %s \n", Book1.subject);
    printf("Title Is : %s \n", Book1.title);
    printf("ID Is : %d \n", Book1.book_id);
    /* print Book2 info */
    printf("Author Is : %s \n", Book2.author);
    printf("Subject Is : %s \n", Book2.subject);
    printf("Title Is : %s \n", Book2.title);
    printf("ID Is : %d \n", Book2.book_id);
    return (EXIT_SUCCESS);
}

