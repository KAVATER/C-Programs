#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first string:\n");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';

    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';

    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int result;

   
    char temp [2* length1 +1];

    if(length1 != length2)
    {
        result = -1;
        printf("Both the strings are Not Rotation of each other.\n");
    }

    else{
        strcpy(temp, str1);
        strcat(temp, str1);
        char *point = strstr(temp, str2);
        if( point == NULL)
        result = -1;
        else
        result = 1;
        printf("Both the strings are rotation of each other with string 2 starts form : ");
        printf("%ld\n", point - temp);// subracting the address of the two locations
    }

    
}