#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 32

int main(int argc, char *argv[]) {
   
    char str[10];
    scanf("%s",str);
    printf("str = {%s}\n",str);
    
    FILE *stream;
    stream = fopen("output.txt", "a");
    if (stream == NULL) {
        printf("ERROR OPENING ASDASDASDASD");
    } else {
        fprintf(stream, "%s", str);
        fclose(stream);
    }
    
    return 0;
}

