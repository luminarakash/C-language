// find the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", &password);
    salting(password);
}

void salting(char password[])
{
char salt[] = "123";
char newPass[200];

strcpy(newPass, password);  //newPass = "test"
strcat(newPass, salt);  //newPass = "test" + "123"
puts(newPass);
}