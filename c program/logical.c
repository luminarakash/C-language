#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    if((a>=b) && (b>=c))
    {
        printf("a is higest value");
    }
    else if((a>=b) || (a>=c))
    {
        printf("a is either greaterthan b or c");
    }
    else if((a>=b) || (b>=c) && (c>=b))
    {
        printf("both 'and' and 'or' are used and a is definitely larger");
    }
    else if(a!=b)
    {
        printf("checking for a condition that a is not equal to b");
    }
    else
    {
        printf("finally");
    }
    return 0;
}