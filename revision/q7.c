#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int currNum;
    int sum = 0;
    
    while (scanf("%d", &currNum) != EOF) {
        printf("currNum = %d\n", currNum);
        
        if ( strcmp(argv[1], "-add") == 0) {
            sum = sum + currNum;
        } else {
            if (sum == 0) {
                sum = 1;
            }
            sum = sum * currNum;
        }
    } 
    
    printf("total = %d\n", sum);

    return 0;
}
