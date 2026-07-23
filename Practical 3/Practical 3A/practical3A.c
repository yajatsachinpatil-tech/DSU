#include <stdio.h>

int main() {
    int n, target, flag = 0, temp;

    printf("Enter a length: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("Enter a number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            flag = 1;
            temp = i + 1;
            break;
        }
    }

    if (flag > 0) {
        printf("Found Element at index: %d\n", temp);
    }
    else {
        printf("Element not in the array\n");
    }

    return 0;
}
