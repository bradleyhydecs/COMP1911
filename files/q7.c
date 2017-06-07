#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 32

int main(int argc, char *argv[]) {
    
    FILE *stream;
    char line[MAX_LEN];
    char lines[5000][MAX_LEN];
    int i = 0;
    int finalIndex = 0;
    
    stream = fopen("words5.txt", "r");
    
    if (stream == NULL) {
        printf("error reading file\n");
    } else {
        while (fgets(lines[i], MAX_LEN, stream) != NULL) {
            printf("%s",lines[i]);
            i = i + 1;
            finalIndex = finalIndex + 1;
        }
    }
    
    printf("%s",lines[0]);
    printf("%s",lines[3]);
    
    return 0;
}

