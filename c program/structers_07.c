// typedef keyword: use to create alias for data types

#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceEngineer
{
    int roll;
    float cgpa;
    char name[100];
}cse;


int main()
{
    cse s1;
    s1.roll = 3070;
    s1.cgpa = 9.2;
    strcpy(s1.name,"Akash");

    printf("student.roll = %d\n", s1.cgpa);
    printf("student.name = %d\n", s1.name);
    printf("student.cgpa = %d\n", s1.cgpa);

    return 0;
}