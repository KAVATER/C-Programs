#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int shouldSwap(char *str, int start, int curr)
{
    for (int i = start; i < curr; i++) {
        if (str[i] == str[curr]) {
            return 0; // already swapped
        }
    }
    return 1;
}

void permute(char *a, int i, int n)
{
    if (i == n) {
        printf("%s\n", a);
    } else {
        for (int j = i; j <= n; j++) {
            if (shouldSwap(a, i, j)) {
                swap(&a[i], &a[j]);
                permute(a, i + 1, n);
                swap(&a[i], &a[j]); // backtrack
            }
        }
    }
}

int main()
{
    char a[20];
    printf("Enter a string: ");
    scanf("%s", a);
    int n = strlen(a);
    printf("Permutations:\n");
    permute(a, 0, n - 1);
    return 0;
}
