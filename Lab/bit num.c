#include <stdio.h>

int main() {
    unsigned char num;
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    // 4th bit = (1 << 3), 7th bit = (1 << 6)
    num = num & ~(1 << 3);  
    num = num & ~(1 << 6);  

    printf("Modified number: %d\n", num);

    return 0;
}
