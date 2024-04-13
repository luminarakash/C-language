#include<stdio.h>
int main ()
{
    int a=20, b=40;
    //binary: a=10100 and b=101000//
    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    printf("%d\n", ~a);
    printf("%d\n", a<<2);
    printf("%d\n", a>>2);
}
