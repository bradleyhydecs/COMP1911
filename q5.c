#include <stdio.h>

#define MAX_LINE 4096
#define UPPER_CASE_OFFSET 32

int main(void) {
    int  i;
    char c;
    
    c = getchar();
    while (c != EOF) {

        // take c, turn it into upper case
        if (c >= 'a' && c <= 'z') {
            c = c - UPPER_CASE_OFFSET;
            // but we should probably use toupper()!
        }
        
        putchar(c);
        c = getchar();        
    }
    
    
    return 0;
}
