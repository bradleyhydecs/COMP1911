#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
/*
    int x = -9;
    int *p1 = &x;
    int *p2;

    p2 = p1;
    printf("%d\n", *p2);
    *p2 = 10;
    printf("%d\n",x);
*/

/*
    char goals[] = "All your goals belong to us.";
    char *a, *b, *c;

    a = goals + 5;                      //"our goals belong to us."
    b = &goals[10];                     //"oals belong to us."
    c = goals + (b - goals) + (b - a);
    // c = goals + 15;
    
    //goals + 10 + 10-5  
    //+ 15 more  = F in hex
   // int d = c - b;
    char *test = goals + (c-b);
    printf("{%p} {%p}\n", goals, test);
    printf("c={%s}\n", a);
    printf("%c\n", c[a - b]);
    
    */
    
    int i = 0;
    int j = 0;
    char *s = "ceded"; // 99 101 100 101 100

    while (s[i] != '\0') {
        j = j + s[i] - 97;
        i = i + 1;

        // j = 0  + 99  - 97 = 2
        // j = 2  + 101 - 97 = 6
        // j = 6  + 100 - 97 = 9
        // j = 9  + 101 - 97 = 13
        // j = 13 + 100 - 97 = 16
    }
    printf("%d %d\n", i, j);

    return 0;
}
