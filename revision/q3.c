#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date Date;
struct date{
    int day;
    int month;
    int year;
};

int main() {
  
    Date *dates = malloc(sizeof(Date) * 100);
    
    //01/12/2018
    dates[0].day = 01;
    dates[0].month = 12;
    dates[0].year = 2018;
    
    //Date *date = malloc(sizeof(Date) * 1);
    //date->day = 01;
    //date->month = 12;
    //date->year = 2018;
    
    printf("%d %d %d", dates[0].day, dates[0].month, dates[0].year);
    
    free(dates);
    
    return 0;
}
