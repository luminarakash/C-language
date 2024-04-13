// Passing structer to function: void printinfo(struct student s1);

#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printfinfo(struct student s1);
int main()
{
    struct student s1 = {3070, 9.2, "Akash"};
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1)
{
    printf("student information:\n");
    printf("student.roll = %d\n", s1.cgpa);
    printf("student.name = %d\n", s1.name);
    printf("student.cgpa = %d\n", s1.cgpa);
}
