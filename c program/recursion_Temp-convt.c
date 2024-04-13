#include<stdio.h>
float convertTemp(float celsius);
int main()
{
    float far = convertTemp(0);
    printf("far %f",far);
    return 0;
}
float convertTemp(float celsium)
{
    float far = celsium *(9/5)+32;
    return far;
}