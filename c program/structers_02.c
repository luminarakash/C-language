// write a programm to store the data of 3 students.

#include<stdio.h>
#include<string.h>

// user defind
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
struct student s1;
    s1.roll = 3070;
    s1.cgpa = 9.2;
// s1.name, "Akash";
strcpy(s1.name, "Akash");
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n", s1.cgpa);

struct student s2;
    s2.roll = 3058;
    s2.cgpa = 9.0;
// s2.name, "Aman";
strcpy(s2.name, "Aman");
printf("student name = %s\n", s2.name);
printf("student roll no = %d\n", s2.roll);
printf("student cgpa = %f\n", s2.cgpa);

struct student s3;
    s3.roll = 3068;
    s3.cgpa = 9.1;
// s3.name, "Abhay";
strcpy(s3.name, "Abhay");
printf("student name = %s\n", s3.name);
printf("student roll no = %d\n", s3.roll);
printf("student cgpa = %f\n", s3.cgpa);

return 0;
}