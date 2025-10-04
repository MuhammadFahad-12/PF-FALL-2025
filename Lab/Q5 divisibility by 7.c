#include <stdio.h>

int main() {
    int num, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 9 || num < -9) {
        lastDigit = num % 10;
        num = num / 10 - 2 * lastDigit;
    }

    if(num == 0 || num == 7 || num == -7)
        printf("Number is divisible by 7\n");
    else
        printf("Number is not divisible by 7\n");

    return 0;
}
