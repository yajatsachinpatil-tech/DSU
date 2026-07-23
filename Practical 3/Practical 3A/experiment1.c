#include <stdio.h>

int main() {
    int arr[10] = {10, 10, 10, 20, 20, 2323, 23, 23, 2394, 342};
    int a, occ = 0, ok = 0;

    printf("Target: ");
    scanf("%d", &a);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == a) {
            occ++;
            ok = 1;
        }
    }

    printf("\n");

    if (ok == 1) {
        printf("Found %d times.\n", occ);
    } else {
        printf("Element not found.");
    }

    return 0;
}
