#include <stdio.h>

int main() {
    int n,  i;
    int largest1, largest2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1]) {
        largest1 = arr[0];
        largest2 = arr[1];
    } else {
        largest1 = arr[1];
        largest2 = arr[0];
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if(arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }

    printf("Two largest numbers are: %d and %d", largest2, largest1);

    return 0;
}
