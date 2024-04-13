// 1. copies value of old string to new string.

#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main(){
  //  char oldStr[] = "akash";
  //  char newStr[] = "patel";
  //  strcpy(newStr, oldStr);
  //  puts(newStr);
  //  puts(oldStr);

// 2. concatenates first string with string.
  char firstStr[100] = "Hello ";
  char secStr[] = "world";
  strcat(firstStr, secStr);
  puts(firstStr);
}