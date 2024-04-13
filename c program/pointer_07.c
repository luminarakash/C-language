/* pointer in function call:
1.call by value (we pass value of varible as argument)
2.call by reference (we pass address of varible as argument) */

#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int m=23,n=21;
    int x=3, y=5;
    _swap(&x,&y);
    swap(m,n);
    printf("x=%d & y=%d\n",x ,y);
    return 0;
}

// call by reference
void _swap(int *a, int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

// call by value//
void swap(int a, int b)
{
int t=a;
a=b;
b=t;
printf("a=%d & b=%d\n",a,b);
}