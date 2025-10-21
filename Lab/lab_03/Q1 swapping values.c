#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Swapping values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First integer = %d\n", a);
    printf("Second integer = %d\n", b);

    return 0;
}
