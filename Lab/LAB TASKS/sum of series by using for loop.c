#include <stdio.h>

int main() {
    int a = 1, b = 1, c, sum = 0;
    printf("Fibonacci Series (for loop): %d %d ", a, b);

    for (c = a + b; c <= 1000; c = a + b) {
        printf("%d ", c);
        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0)
            sum += c;
        a = b;
        b = c;
    }
    printf("\nSum (divisible by 3, 5 or 7): %d\n", sum);
    return 0;
}
