#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};
/* function declaration */
void printBook(struct Books book);

int main(int argc, char** argv) {
    struct Books Book1; /* Declare Book1 of type Book */
    struct Books Book2; /* Declare Book2 of type Book */
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
    printBooks(Book1);
    /* print Book2 info */
    printBooks(Book2);
    return (EXIT_SUCCESS);
}
void printBooks(struct Books book){
    /* print Book1 info */
    printf("Author Is : %s \n", book.author);
    printf("Subject Is : %s \n", book.subject);
    printf("Title Is : %s \n", book.title);
    printf("ID Is : %d \n", book.book_id);
}

