#include <stdio.h>

int main() {
    int calories, fatGrams, fatCalories;
    float percentage;

    printf("Enter total calories: ");
    scanf("%d", &calories);
    printf("Enter fat grams: ");
    scanf("%d", &fatGrams);

    fatCalories = fatGrams * 9;

    if(calories <= 0 || fatGrams < 0 || fatCalories > calories) {
        printf("Error: Invalid input values!\n");
    } else {
        percentage = (float)fatCalories / calories * 100;
        printf("Calories from fat: %d\n", fatCalories);
        printf("Percentage of calories from fat: %.2f%%\n", percentage);

        if(percentage < 30)
            printf("Food is low in fat.\n");
    }

    return 0;
}
