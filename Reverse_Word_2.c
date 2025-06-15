#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverse_word(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    // Reverse the entire sentence
    reverse(str, 0, length - 1);

    // Reverse each word
    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[100];
    printf("Enter the String:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    reverse_word(str);

    printf("Reversed sentence:\n");
    for (int j = 0; j < strlen(str); j++) {
        printf("%c", str[j])
    }

    return 0;
}
