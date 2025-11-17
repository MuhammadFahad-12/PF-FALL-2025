#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Enter a number with decimal part: ");
    scanf("%f", &num);

    float rounded = round(num * 100) / 100;

    printf("Rounded value = %.2f\n", rounded);

    return 0;
}
