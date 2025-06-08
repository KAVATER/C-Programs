#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

#define size 256

int anagram(char str1[], char str2[])
{
    int count[size] = {0};//freq array
    //checking length 
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    //checking characters
    for(int i=0; i< str1[i]&& str2[i]; i++)
    {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;

    }
    for(int i =0; i<size; i++)
    {
        if(count[i] !=0)
        return 0;
    }
    return 1;
    
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: \n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: \n");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1,"\n")]= '\0';
    str2[strcspn(str2, "\n")] ='\0';

    if(anagram(str1, str2))//non zero is true
    {
        printf("The entered strings are anagrams.\n");
    }
    else// 0 is false
    {
        printf("The entered strings are not anagrams.\n");
    }
    return 0;
    
    
}