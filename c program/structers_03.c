// array of structers

#include<stdio.h>
#include<string.h>

// user defind
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student cse[100];
    cse[0].roll = 3070;
    cse[0].cgpa = 9.2;
    strcpy(cse[0].name, "Akash");
    
    printf("name = %s\n", cse[0].name);
    printf("roll no = %d\n", cse[0].roll);
    printf("cgpa = %f\n", cse[0].cgpa);

    return 0;
}