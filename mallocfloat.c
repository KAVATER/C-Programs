#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(10 * sizeof(float));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the 10 float values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", ptr + i);  // Corrected format specifier
    }

    printf("Entered values are:\n");
    for (int i = 0; i < 10; i++) {  // Loop to print all values
        printf("%f\t", *(ptr + i));  // Corrected format specifier
    }

    free(ptr);
    return 0;
}
