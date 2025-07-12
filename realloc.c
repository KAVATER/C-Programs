#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter total number of values: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter the values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("\nEnter updated size of n: ");
    scanf("%d", &n);

    int *temp = (int*)realloc(ptr, n * sizeof(int));
    if (temp != NULL) {
        ptr = temp;
    } else {
        printf("Memory reallocation failed! Using old memory.\n");
    }

    printf("\nPrevious address: %p, New address: %p\n", (void*)ptr, (void*)temp);

    printf("\nThe entered values are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", *(ptr + i));
    }

    free(ptr);
    return 0;
}
