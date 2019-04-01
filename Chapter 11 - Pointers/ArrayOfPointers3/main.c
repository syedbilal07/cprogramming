#include <stdio.h>
#include <stdlib.h>

const int MAX = 4;

int main(int argc, char** argv) {
    char *names[] = {
      "Sadia Iqbal",
      "Sonia Iqbal",
      "Beenish Arif",
      "Aniqa Siddiqi"
    };
    int i = 0;
    for(; i < MAX; i++){
        printf("Value Of Name[%d] Is : %s \n", i, names[i]);
    }
    return (EXIT_SUCCESS);
}

