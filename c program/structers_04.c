// initilizing structers:  struct student s1 = {"Akash", 3070, 9.2};

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {3070, 9.2, "Akash"};
   // strcpy(s1.name, "Akash");
    printf("student: roll no = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);
    printf("name = %s\n", s1.name);
    return 0;
}
