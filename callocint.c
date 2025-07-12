#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    
    ptr = (int *)calloc(5, sizeof(int));  // Corrected allocation
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return 1;  // Exit if memory allocation fails
    }

    printf("Enter 5 integer values:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  // Corrected scanf
    }

    printf("Entered values are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", *(ptr + i));  // Corrected pointer access
    }

    free(ptr);  // Free allocated memory
    return 0;
}
