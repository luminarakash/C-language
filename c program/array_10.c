// write a program to store the first n fibonacci numbers.

#include<stdio.h>

// int countOdd(int arr[], int n);
// void reverse(int arr[], int n);
// void printfArr(int arr[], int n);

int main()
{
    int n;
    printf("enter n (n>2) : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i=2; i<n; i++) //1,
    {
        fib[i] = fib[i-1] + fib[i-2];  //important
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}