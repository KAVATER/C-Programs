#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;

    printf("Enter total number of values: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Memory allocated successfully.\n");

    printf("Enter the values:\n");
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &ptr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(ptr);
            return 1;
        }
    }

    printf("The values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n");

    free(ptr);
    printf("Memory freed. Program finished.\n");

    return 0;
}
