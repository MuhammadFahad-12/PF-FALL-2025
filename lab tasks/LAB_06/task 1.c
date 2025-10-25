#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; 

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        for(int i = num; i >= 1; i--) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}
