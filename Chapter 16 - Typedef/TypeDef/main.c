#include <stdio.h>
#include <stdlib.h>

typedef struct Books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} Book;

int main(int argc, char** argv) {
    Book book;
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Dennis Ritchie");
    strcpy(book.subject, "Fundamentals Of C Programming");
    book.book_id = 21;
    printf("Book Title Is : %s \n", book.title);
    printf("Book Author Is : %s \n", book.author);
    printf("Subject Is : %s \n", book.subject);
    printf("ID Is : %d \n", book.book_id);
    return (EXIT_SUCCESS);
}

