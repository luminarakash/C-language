#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d\n",&b);
    a+=b;
    printf("%d\n",a);
    a-=b;
    printf("%d\n",a);
    a*=b;
    printf("%d\n",a);
    a/=b;
    printf("%d\n",a);
    a%=b;
    printf("%d\n",a);
    a<<=2;
    printf("%d\n",a);
    a>>=2;
    printf("%d\n",a);
    a&=2;
    printf("%d\n",a);
    a^=2;
    printf("%d\n",a);
    a|=2;
    printf("%d\n",a);
}