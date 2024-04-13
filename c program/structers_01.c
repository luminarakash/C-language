/* a collection of value of diffrent data types
Exp: for a student store-
name(string)
roll no(integer)
cgpa(float) */

#include<stdio.h>
#include<stdio.h>

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
    // s1.name = "Akash";
    strcpy(s1.name, "Akash");
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    return 0;
}
