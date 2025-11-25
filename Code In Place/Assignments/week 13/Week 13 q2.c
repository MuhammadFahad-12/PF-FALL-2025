#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)calloc(10, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print values (should all be 0)
    printf("Array created using calloc (should all be zero):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}