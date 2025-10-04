#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Two real roots: %.2f and %.2f\n", root1, root2);
    }
    else if(discriminant == 0) {
        root1 = -b / (2*a);
        printf("One real root: %.2f\n", root1);
    }
    else {
        float real = -b / (2*a);
        float imag = sqrt(-discriminant) / (2*a);
        printf("Imaginary roots: %.2f + %.2fi and %.2f - %.2fi\n",
               real, imag, real, imag);
    }

    return 0;
}
