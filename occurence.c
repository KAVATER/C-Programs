#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 256

int main()
{
    char str[max];
    printf("Enter a String: \n");
    fgets(str, max,stdin);
    str[strcspn(str, "/n")] = '\0';

    int count;

    for(int i=0; str[i]!='\0'; i++)
    {
        count =0;
        char temp = str[i];

        for(int j=i+1; str[j]!='\0'; j++)
        {
        if(temp == str[j])
        {
            count ++;
        }
    }
    if(count !=0)
    {
        printf("The occurence of %c is : %d", str[i],count);
    }
    }


}