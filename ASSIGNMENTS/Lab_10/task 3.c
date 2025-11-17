#include <stdio.h>

void getData(int *a, int *h) {
    printf("Enter base length a: ");
    scanf("%d", a);

    printf("Enter height h: ");
    scanf("%d", h);
}

float volumeCalc(int a, int h) {
    return (a * a * h) / 3.0;
}

int main() {
    int a, h;

    getData(&a, &h);

    float v = volumeCalc(a, h);

    printf("Volume = %.2f\n", v);

    return 0;
}
