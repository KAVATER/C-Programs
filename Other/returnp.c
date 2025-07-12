#include <stdio.h>

int* func()
{
    int a = 10;
    return(&a);
}

int main()
{
    int*p;
    p = func();
    printf("%p\n",p);
    printf("%d\n",*p);
    return 0;
}