#include <stdio.h>

int main() {
    long value1 = 200000, value2;
    long *lPtr;

    // a) Define pointer
    lPtr = &value1; // b) Assign address of value1 to lPtr

    // c) Print value pointed by lPtr
    printf("Value via pointer: %ld\n", *lPtr);

    // d) Assign pointed value to value2
    value2 = *lPtr;

    // e) Print value2
    printf("Value2 = %ld\n", value2);

    // f) Print address of value1
    printf("Address of value1: %p\n", (void*)&value1);

    // g) Print the address stored in lPtr
    printf("Address stored in lPtr: %p\n", (void*)lPtr);

    return 0;
}
