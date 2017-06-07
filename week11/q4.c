#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 64

typedef struct student Student;
struct student {
    int zid;
    char name[MAX_LEN];
};

Student * findStudent(Student class[], int size, int zid) {

    int i = 0;
    while (i < size) {
        if (class[i].zid == zid) {
            return &class[i];
        }
        i++;
    }


    return NULL;
    
}


int * f(void){
    int nums[] = {1,2,3};
    int *location = malloc(sizeof(int));
    location = nums;
    return location;
}

typedef struct date Date;
struct date {
   int day;
   int month;
   int year;
};

void setDate(Date * d);

int main(void){
    Date d;
    Date *date = &d;   
    setDate(date);
    
    int *arrayLoc = f();
    printf("%d\n", arrayLoc[0]);
    printf("%d\n", arrayLoc[1]);
    printf("%d\n", arrayLoc[2]);
    
    
    return 0;
}

void setDate(Date *d){
    d->day = 3;
    d->month = 4;
    d->year = 1975; 
}


//
/*
int main(void) {
    Student students[2];
    
    Student s1;
    s1.zid = 1234;
    strcpy(s1.name, "john");

    Student s2;
    s2.zid = 4444;
    strcpy(s2.name, "bob");

    students[0] = s1;
    students[1] = s2;

    Student *s3 = findStudent(students, 2, 4444);
    
    printf("we found: %d %s \n", s3->zid, s3->name);
    
    char s[] = "Hello World!";
    char *cp = s;
    char *cp2 = &s[8];
    
    //What is the output when the following statements are executed?
    /*
    printf("%s\n", cp);
    printf("%c\n", *cp);
    printf("%c\n", cp[6]);
    printf("%s\n", cp2);
    printf("%c\n", *cp2);
  
    return 0;
}
  */
