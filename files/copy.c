#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 32

int main(int argc, char *argv[]) {
   
    char str[1000];
    
    FILE *inputStream;
    inputStream = fopen("output.txt", "r");
    
    FILE *outputStream;
    outputStream = fopen("new_out.txt", "w");
    
    if (inputStream == NULL || outputStream == NULL) {
        printf("ERROR OPENING ASDASDASDASD");
    } else {
        while(fgets(str, 1000, inputStream) ) {
            printf("line = %s", str);
            fprintf(outputStream,"%s",str);
        }
        fclose(inputStream);
        fclose(outputStream);
    }
    
    return 0;
}


