// printf the value of 'i' from its pointer to pointer.

#include<stdio.h>
int main()
{
    // float prive = 100.00;
    // float *ptr = &price;
    // float **ptr = &ptr;

     int i = 5;
     int *ptr = &i;
     int **pptr = &ptr;
    
    printf("%d\n", **pptr);
    return 0;
}