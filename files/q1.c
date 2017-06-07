#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%s argc=%d \n", argv[argc - 1], argc);
    
    // find end index
    int i = 0;
    
    while (argv[argc-1][i] != '\0') {
        i = i + 1;
    }
    printf("i = %d\n", i);
    i = i - 1;
    
    // start from end index, loop to first index (0)
    while (i >= 0) {
        printf("%c", argv[argc-1][i]);
        i = i - 1;
    }
    printf("\n");
    
    return 0;
}
