#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative number entered! Exiting...\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is = %lld\n", n, fact);
    return 0;
}
