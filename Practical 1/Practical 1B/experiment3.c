#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' ')) {
            words++;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}
