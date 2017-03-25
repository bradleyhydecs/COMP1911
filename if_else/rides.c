
#include <stdio.h>
#include <stdlib.h>

#define GREEN_MIN 120
#define YELLOW_MIN 130
#define RED_MIN 140

int main() 
{
    int height;
    printf("Please enter your height ");
    scanf("%d", &height);

    if (height >= GREEN_MIN) {
        printf("Green Rides\n");
    }
    else {
        printf("Sorry, no rides are safe for you!\n");
    } 

    if (height >= YELLOW_MIN) {
        printf("Yellow Rides\n");
    }

    if (height >= RED_MIN) {
        printf("Red Rides\n");
    }

	return EXIT_SUCCESS;
}

