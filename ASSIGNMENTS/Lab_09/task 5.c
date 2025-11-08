#include <stdio.h>

void SortFunction(int *arr, int size, int order) {
    int i, j, temp;
    for(i = 0; i < size-1; i++) {
        for(j = i+1; j < size; j++) {
            if((order == 1 && arr[i] > arr[j]) || 
               (order == 2 && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10], i, order;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter 1 for Ascending OR 2 for Descending: ");
    scanf("%d", &order);

    SortFunction(arr, 10, order);

    printf("\nSorted Array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}
