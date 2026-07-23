#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 12, 34, 4234, 43, 42, 4, 234, 34};
    int a, o = 0;

    printf("Enter target: ");
    scanf("%d", &a);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == a) {
            o = i + 1;
            break;
        }
    }

    if (o > 0) {
        printf("Element found at pos: %d\n", o);
        printf("No. of comparisons made: %d\n", o);
    } 
    else {
        printf("Element not found.");
    }

    return 0;
}
