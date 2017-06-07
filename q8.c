#include <stdio.h>

#define MAX_LINE 4096

int main(void) {
    char line[MAX_LINE];
    int  i;

    while (fgets(line, MAX_LINE, stdin) != NULL) {
        i = 0;
        while (line[i] != '\n' && line[i] != '\0') {            
            i = i + 1;
        }
        
        i = i - 1;
        while (i >= 0) {            
            printf("%c",line[i]);
            i = i - 1;
        }

        printf("\n");
    }
    
    return 0;
}
