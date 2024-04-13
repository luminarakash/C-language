//  wirte the function to count the occurence of voweles in the given string

#include <string.h>
#include <string.h>

int countVowe(char str[]);
int main()
{
  char str[] = "akash patel";
  printf("vowels are: %d", countVowels(str));
  return 0; 
}

int countVowels(char str[])
{
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' || str[i] == 'u')
    {
      count++;
    }
  }
  return count;
}