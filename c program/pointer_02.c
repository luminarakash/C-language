// declaring pointer, format specifier
// A varible that stores the memory address of another varible.


#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr=&age;
    //value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
}