#include <stdio.h>

int main(void) 
{
    int number, row, column;

    printf("Enter number: ");
    scanf("%d",&number);

    row = 1;
    while (row <= number) 
    {
        column = 1;
        while (column <= number) 
        {
            if (column == row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
