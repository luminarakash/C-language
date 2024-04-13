// Arrow operator: (*ptr).code <-----> ptr->code

#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
    };
int main(){
     struct student s1 = {3070, 9.2, "Akash"};
     printf("student.roll = %d\n", s1.roll);
     
    struct student *ptr = &s1;
    printf("student.roll with ptr = %d\n", (*ptr).roll);

printf("student->roll = %d\n",ptr->roll);
printf("student->name = %d\n",ptr->name);
printf("student->cgpa = %d\n",ptr->cgpa);
return 0;
}