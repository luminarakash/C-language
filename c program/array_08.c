// for given array, what will the following give?

#include<stdio.h>
int countOdd(int arr[], int n);
int main()
{
    int arr[] = {1,2,3,4,5};
    printf("%d\n", *(arr+0));
    printf("%d\n", *(arr+1));
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+3));
    printf("%d\n", *(arr+4));
    printf("%d\n", *(arr+5));
    return 0;
}