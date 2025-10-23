#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit, rev = 0, i, isPrime = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (sum % 2 == 0) {
        // Check prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a Prime number (Sum of digits even)\n", num);
        else
            printf("%d is NOT a Prime number (Sum of digits even)\n", num);
    } else {
        // Check palindrome
        if (rev == num)
            printf("%d is a Palindrome (Sum of digits odd)\n", num);
        else
            printf("%d is NOT a Palindrome (Sum of digits odd)\n", num);
    }

    return 0;
}
