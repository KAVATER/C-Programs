#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define max_word 100
#define max_len 100

char stack[max_word][max_len];
int top =-1;

void push(char word[])
{
    int i =0;
    top++;
    while(word[i]!= '\0')
    {
        stack[top][i]=word[i];
        i++;
        }
        stack[top][i] = '\0';
}
// pop word from stack
void pop(char word[])
{
    int i =0;
    while(stack[top][i] !='\0')
    {
        word[i] = stack[top][i];
        i++;
    }
    word[i] = '\0';
    top --;
}
// char reverse(char str[])
// {
//     int top = -1;
//     for(int i=0; i<strlen(str); i++)
//     {
//    //push
//    if(top<max-1)
//    {
//     stack[++top] == str[i] ;
//    }
//     }
//     //pop
//     if(top>=0)
//     {
//         return stack[top--];

//     }
//     return '0'; // return null character if empty

// }

int main()
{
    char str[1000];
    char word[max_len];
    int j = 0, i =0;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    
     while(str[i]!='\0')
     {
        if(str[i] != ' ')
        {
            word[j++] = str[i];
        }
        else{
            word[j] = '\0';
            push(word);
            j =0;
        }
        i++;
     }
     //push last word
     word[j]='\0';
     if(j>0)
     {
        push(word);
     }
     //pop and print
    printf("Reversed String is :\n" );
    while(top>=0)
    {
        pop(word);
        printf("%s",word);
        if(top>=0)
        printf(" ");
    }
    printf("\n");
    return 0;
}