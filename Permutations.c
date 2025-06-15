#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *left , char *right)
{
    if(left >= right)
    {
      return;
    }
    char temp;
    temp = *left;
    *left = *right;
    *right = temp; 
    reverse(left++, right++);
}
int main()
{
    char str[100];
    printf("Enter the string.\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    reverse(str, str + strlen(str)-1 );
    printf("Reverse string is:\n");
    printf("%s",str);
}