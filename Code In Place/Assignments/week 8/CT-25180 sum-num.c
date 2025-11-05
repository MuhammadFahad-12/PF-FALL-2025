#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Input=");
    scanf("%d", &n);
    do {
        int remainder = n % 10;
        sum+=remainder;
        n /= 10;
    } while (n !=0);
    printf("Sum=%d", sum);
    return 0;
}