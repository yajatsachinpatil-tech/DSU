#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c : %d\n", (char)i, freq[i]);
        }
    }

    return 0;
}
