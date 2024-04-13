#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i==6)
        {
            break;
        }
        printf("%d\n",i);
    }
    printf("bye");
    return 0;
}