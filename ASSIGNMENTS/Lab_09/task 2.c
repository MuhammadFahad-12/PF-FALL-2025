#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp;
    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}

int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    swaped(&a, &b, &c);

    printf("After Swapping: a=%d b=%d c=%d\n", a, b, c);

    return 0;
}
