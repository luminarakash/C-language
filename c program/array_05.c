// transverse of an array.

#include<stdio.h>
int main ()
{
    int aadhar [5];

    //intput
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++)
    {
        printf("%d index : ",i);
        scanf("%d", (ptr+i));
    }

    //output
    for(int i=0; i<5; i++)
    {
        printf("%d index = %d\n",i,*(ptr+i));
    }
    return 0;
}