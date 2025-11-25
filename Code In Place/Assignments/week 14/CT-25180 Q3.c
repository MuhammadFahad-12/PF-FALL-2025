#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 100;
    printf("After assigning int: i = %d, f = %f, c = %c\n", d.i, d.f, d.c);

    d.f = 25.5;
    printf("After assigning float: i = %d, f = %f, c = %c\n", d.i, d.f, d.c);

    d.c = 'A';
    printf("After assigning char: i = %d, f = %f, c = %c\n", d.i, d.f, d.c);

    return 0;
}