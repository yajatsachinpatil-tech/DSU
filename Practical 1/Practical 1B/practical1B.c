#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void strrev_custom(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to convert string to uppercase
void strupr_custom(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

// Function to convert string to lowercase
void strlwr_custom(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int main() {
    char str1[100], str2[100], copy[100];
    char ch;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // strlen()
    printf("\nLength of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));

    // strcmp()
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result > 0)
        printf("First string is greater than second string.\n");
    else
        printf("First string is smaller than second string.\n");

    // strcpy()
    strcpy(copy, str1);
    printf("Copied string = %s\n", copy);

    // strcat()
    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    // strrev()
    strrev_custom(copy);
    printf("Reversed copied string = %s\n", copy);

    // strupr()
    strupr_custom(copy);
    printf("Uppercase string = %s\n", copy);

    // strlwr()
    strlwr_custom(copy);
    printf("Lowercase string = %s\n", copy);

    // strchr()
    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    char *ptr = strchr(str1, ch);

    if (ptr != NULL)
        printf("Character found at position %ld\n", ptr - str1 + 1);
    else
        printf("Character not found.\n");

    return 0;
}
