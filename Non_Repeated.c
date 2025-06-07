#include<stdio.h>
#include<stdlib.h>

#define MAX_CHAR 256

int main()
{
  char str[100];
  int count[MAX_CHAR] = {0};
  printf("Enter the Character:");
  scanf("%s",str);

  for(int i =0 ; str[i]!='\0'; i++)
  {
    count[(unsigned char)str[i]]++;
  }

  for(int i=0; str[i]!=0; i++)
  {
    if(count[(unsigned char)str[i]]==1)
    {
        printf("First character that does not repeat is : '%c'\n", str[i]);
        return 0;
    }
   
  }
  
  printf("There is no such word in the character");
  return 0;

}