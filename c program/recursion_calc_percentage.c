#include<stdio.h>
int main()
{
    int sc = 98;
    int math = 95;
    int sanskrit = 100;
    printf("percentage is %d", calcPercentage(sc, math, sanskrit));
    return 0;
}
int calcPercentage(int science, int math, int sanskrit)
{
    return((science+math+sanskrit)/3);
}