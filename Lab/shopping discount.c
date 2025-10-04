#include <stdio.h>

int main() {
    float shopping, discount = 0, finalAmount;
    printf("Enter total shopping amount: ");
    scanf("%f", &shopping);

    if(shopping > 1999)
        discount = shopping * 0.5;
    else if(shopping >= 2000 && shopping <= 4000)
        discount = shopping * 0.2;
    else if(shopping >= 4001 && shopping <= 6000)
        discount = shopping * 0.3;

    finalAmount = shopping - discount;

    printf("Shopping Amount: %.2f\n", shopping);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}
