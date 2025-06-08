#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000

char stack[max];
 int top = -1;

//push
void push(char c)
{
    if(top<max-1)
    {
        stack[++top] = c;
    }
}
//pop
char pop(){
    if(top >= 0)
    {
        return stack[top--];
    }
    return '\0';//returning null character if empty
}
int match(char open, char close)
{
    return(open == '(' && close == ')')||
          (open == '[' && close == ']')||
          (open == '{' && close == '}');
}

int balanced(const char *str)
{
    top = -1; //reset stack
    for(int i =0 ; str[i] != '\0'; i++)
    {
        char c = str[i]; 
        if( c == '(' || c=='{' || c=='[')
        {
            push(c);
        }
        else if(c==')' || c==']'|| c=='}')
        {
            char topChar = pop();
            if(!match(topChar,c)){
                return 0;//not balanced
            }
        }
    }
    return (top ==-1); //balanced if stack is empty
}
int main()
{
    char input[max];
    printf("Enter a String: \n");
    fgets(input, max, stdin);
    input[strcspn(input, "\n")] = '\0'; //Find the first \n in input, 
    //and replace it with \0 (null character) to terminate the string.”
    
    if(balanced(input)){
        printf("The sring has balanced parentheses.\n");
    }
    else{
        printf("The string does not have balanced parentheses.\n");
    }
    return 0;
}