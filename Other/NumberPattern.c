#include <stdio.h>
int main()
{
    int n = 5, gap = n-1, num =1;
    for(int i=1;i<=n;i++)
    {
        num = i;
        for(int j =1; j<=gap;j++)
        {
            printf("*");

        }
        gap --;
        for(int j=1;j<=i;j++)
        {
            printf("%d",num);
            num ++;
        }
        num = num-2;
        for(int j=1;j<i;j++)
        {
            printf("%d",num);
            num --;
        }
        printf("\n");
    }
}