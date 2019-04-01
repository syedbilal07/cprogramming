#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE *fp;
    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...", fp);
    fclose(fp);
    return (EXIT_SUCCESS);
}

