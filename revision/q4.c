#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if (argc < 3) {
        printf("MORE ARGS PLZ\n");
        return 0;
    }

    int start = atoi(argv[1]);
    int finish = atoi(argv[2]);

    start++;  
    while (start < finish ) {
        if (start % 13 == 0) {
            printf("%d\n", start);
        }
        start++;
    }
    return 0;
}
