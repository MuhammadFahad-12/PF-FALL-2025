#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("Number of even elements: %d", count);

    return 0;
}
