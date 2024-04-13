// collection of similar data types stored at contiguous memory locations.

#include <stdio.h>
int main()
{

    // int marks1 = 97;
    //  int marks2 = 98;
    // int marks3 = 89;

    int marks[3];
    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter che : ");
    scanf("%d", &marks[1]);

    printf("enter math : ");
    scanf("%d", &marks[2]);
    printf("phy = %d, che = %d, math = %d", marks[0], marks[1], marks[2]);
    return 0;
}