#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;
    
    printf("Enter total no of values: ");
    scanf("%d", &n);

    // Allocate memory
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  // Corrected input statement
    }

    printf("\nThe entered values are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", *(ptr + i));  // Printing values correctly
    }
    
    free(ptr); // Free allocated memory
    return 0;
}
