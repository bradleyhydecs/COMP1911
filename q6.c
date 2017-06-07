#include <stdio.h>

#define MAX_LINE 4096
#define UPPER_CASE_OFFSET 32

int main(void) {
    int  i;
    char c;
    
    c = getchar();
    while (c != EOF) {

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            // special cases:
            // 'z' -> 'a'
            // 'Z' -> 'A'
            if (c == 'z' || c == 'Z') {
                c = c - 25; 
            } else {
                c = c + 1;
            }
        }
            
        // put c back
        putchar(c);
        
        c = getchar();        
    }
    
    
    return 0;
}
