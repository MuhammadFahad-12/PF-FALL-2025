#include <stdio.h>

int main() {
    int a = 1, b = 1, c = 0, sum = 0;
    printf("Fibonacci Series (while loop): %d %d ", a, b);

    while ((c = a + b) <= 1000) {
        printf("%d ", c);
        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0)
            sum += c;
        a = b;
        b = c;
    }
    printf("\nSum (divisible by 3, 5 or 7): %d\n", sum);
    return 0;
}
