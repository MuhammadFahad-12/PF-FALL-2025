#include <stdio.h>

void displayTime(char type, int doubleCup) {
    int water, sugar, addCoffee, addMilk, mix;

    if(type == 'W' || type == 'w') { // White Coffee
        water = 15; sugar = 15; addCoffee = 2; addMilk = 4; mix = 20;
    } else { // Black Coffee
        water = 20; sugar = 10; addCoffee = 15; addMilk = 0; mix = 25;
    }

    if(doubleCup == 1) { // Increase by 50%
        water *= 1.5; sugar *= 1.5; addCoffee *= 1.5; addMilk *= 1.5; mix *= 1.5;
    }

    printf("\nTime Chart for Your Coffee:\n");
    printf("Put Water: %d mins\n", water);
    printf("Sugar: %d mins\n", sugar);
    printf("Add Coffee: %d mins\n", addCoffee);
    if(addMilk > 0)
        printf("Add Milk: %d mins\n", addMilk);
    printf("Mix Well: %d mins\n", mix);
}

int main() {
    char coffeeType;
    int isDouble;

    printf("Enter type of coffee (B for Black, W for White): ");
    scanf(" %c", &coffeeType);

    printf("Is cup size double? (1 for Yes, 0 for No): ");
    scanf("%d", &isDouble);

    displayTime(coffeeType, isDouble);

    return 0;
}
