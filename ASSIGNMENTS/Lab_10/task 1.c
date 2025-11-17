#include <stdio.h>

void CountFrequency(int arr[], int size) {
    int visited[100] = {0};

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }

        printf("Value %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array1[n];

    printf("Random values (0–10):\n");
    for (int i = 0; i < n; i++) {
        array1[i] = rand() % 11;
        printf("%d ", array1[i]);
    }
    printf("\n\n");

    CountFrequency(array1, n);

    return 0;
}
