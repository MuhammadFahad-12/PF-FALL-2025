#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign initial 3 values
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Expand to 5 integers
    arr = (int *)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed.\n");
        return 1;
    }

    // Assign the two new values
    arr[3] = 40;
    arr[4] = 50;

    // Print all 5 integers
    printf("Values after realloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}