#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int totalSize = sizeof(arr);
    int elementSize = sizeof(arr[0]);
    int numberOfElements = totalSize / elementSize;

    printf("Total size of array = %d bytes\n", totalSize);
    printf("Size of one element = %d bytes\n", elementSize);
    printf("Number of elements = %d\n", numberOfElements);

    return 0;
}
