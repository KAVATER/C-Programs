#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 256

int main()
{
    char str[100];
    int count[MAX_CHAR] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("Duplicate characters are: ");

    int found = 0;
    int number =0;
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] > 1) {
            printf("Character '%c' appears %d times\n",i, count[i]);
            number ++;
            found++;
        }
        printf("%n",number);
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}
