// declaring pointer, format specifier
// A varible that stores the memory address of another varible.

#include<stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr =&x;
    *ptr =0; //x=0
    printf("x= %d\n,x"); //x=0
    printf("*ptr = %d\n",*ptr); //x=0
    return 0;
}