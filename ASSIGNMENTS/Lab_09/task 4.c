#include <stdio.h>

int main() {
    float arr[20], *ptr = arr;
    float first = -99999, second = -99999;
    int i;

    printf("Enter 20 float values:\n");
    for(i = 0; i < 20; i++)
        scanf("%f", ptr + i);

    for(i = 0; i < 20; i++) {
        if(*(ptr+i) > first) {
            second = first;
            first = *(ptr+i);
        }
        else if(*(ptr+i) > second && *(ptr+i) != first) {
            second = *(ptr+i);
        }
    }

    printf("Second Highest = %.2f\n", second);
    return 0;
}
