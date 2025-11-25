#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of floats: ");
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values
    printf("Enter %d float values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Print values
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    free(arr);
    return 0;
}