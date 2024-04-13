// compares 2 string &returns a value.

#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main(){
    char firststr[] = "Akash";
    char secstr[] = "Patel";
    printf("%d\n", strcmp(secstr,firststr));
    printf("%d\n",strcmp(firststr,secstr));
    return 0;
}