// we can also subtract one pointer from another.
// we can also compare 2 pointers.

#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %u\n",ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
    return 0;
}