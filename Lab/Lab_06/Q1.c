#include <stdio.h>

int main() {
    int num, i, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial can't be calculated.");
        return 0;
    }

    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("The factorial of %d is %d.", num, fact);
    return 0;
}
