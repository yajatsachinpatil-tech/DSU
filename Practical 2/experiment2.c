#include <stdio.h>

int main() {
    int no, count = 0;

    printf("Enter the number: ");
    scanf("%d", &no);

    for (int i = 0; i < 8; i++) {
        if ((no & (1 << i)) > 0) {
            count++;
        }
    }

    printf("\n");
    printf("No. of bits set to 1 are: %d\n", count);

    return 0;
}
