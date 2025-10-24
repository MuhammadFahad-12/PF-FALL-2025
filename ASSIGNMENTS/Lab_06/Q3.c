#include <stdio.h>

int main() {
    int num, temp, sum = 0, rem, rev = 0, i, flag = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;

    // Find sum of digits
    while (temp > 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        // Check Prime
        if (num < 2) flag = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is a Prime number.\n", num);
        else
            printf("%d is NOT a Prime number.\n", num);
    } else {
        // Check Palindrome
        temp = num;
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num)
            printf("%d is a Palindrome.\n", num);
        else
            printf("%d is NOT a Palindrome.\n", num);
    }

    return 0;
}
