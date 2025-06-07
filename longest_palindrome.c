#include<stdio.h>
#include<stdlib.h>

int expand(char *str, int left, int right)
{
    while(left >=0 && right < strlen(str)&& str[left]== str[right])
    {
        left --;
        right ++;
    }
    return right - left -1;
}

int main()
{
    char str[100];
    printf("Enter the Character:\n");
    scanf("%s",str);
    
    int start =0;
    int maxlen=1;
    int len = strlen(str);

    for (int i =0; i < len; i++)
    {
        int len1= expand(str,i,i);
        int len2= expand(str,i,i+1);
        int currlen= (len1>len2)? len1 : len2;
        
        if(currlen > maxlen)
        {
            maxlen = currlen;
            start = i - (currlen-1)/2;
        }
    }
    printf("Longest Palendrone is :\n");
    for(int i = start; i< start + maxlen; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}