#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character added by fgets()
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            break;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Both strings are equal.\n");
    else if (str1[i] > str2[i])
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");

    return 0;
}
