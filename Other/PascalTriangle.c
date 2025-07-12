#include <Stdio.h>
int main()
{
    int row = 5,i,j,space,coef=1;
    for( i =1;i<=row;i++)
    {
        for(space= 1;space <=row-1;j++)
        {
            printf("*");
        }
        for(j=0;j<=1;j++)
        {
            if(j==0 || i==0)
            coef=1;
            else
            coef=coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }
}