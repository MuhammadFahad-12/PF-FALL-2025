#include <stdio.h>

int main() {
    int arr[10], *ptr = arr, i, sum = 0;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", ptr + i);

    for(i = 0; i < 10; i++)
        sum += *(ptr + i);

    printf("Sum of array = %d\n", sum);

    return 0;
}
