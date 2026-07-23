#include <stdio.h>

int main() {
    int a, new_de, n;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter position to toggle: ");
    scanf("%d", &n);

    int t = n - 1;

    new_de = a ^ (1 << t);

    printf("Toggled output number: %d\n", new_de);

    return 0;
}
