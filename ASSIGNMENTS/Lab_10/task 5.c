#include <stdio.h>

void instructions() {
    printf("This program calculates the total house cost for 5 years.\n");
    printf("Cost = Initial Cost + (Fuel Cost * 5) + (Tax Rate * Initial Cost * 5)\n\n");
}

float calculateCost(float initial, float fuel, float taxRate) {
    float taxes = taxRate * initial * 5;
    float total = initial + (fuel * 5) + taxes;
    return total;
}

int main() {
    float initialCost, fuelCost, taxRate;

    instructions();

    printf("Enter initial cost of house: ");
    scanf("%f", &initialCost);

    printf("Enter yearly fuel cost: ");
    scanf("%f", &fuelCost);

    printf("Enter tax rate (e.g., 0.025): ");
    scanf("%f", &taxRate);

    float total = calculateCost(initialCost, fuelCost, taxRate);

    printf("\nTotal cost after 5 years = %.2f\n", total);

    return 0;
}
