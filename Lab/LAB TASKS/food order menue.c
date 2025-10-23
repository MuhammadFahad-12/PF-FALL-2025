#include <stdio.h>

int main() {
    char item;
    int num, qty, total = 0;

    printf("Welcome to ABC Restaurant Online Order Placement\n");
    printf("------------------------------------------------\n");
    printf("Menu:\n");
    printf("B = Burger (Rs.200)\n");
    printf("F = French Fries (Rs.50)\n");
    printf("P = Pizza (Rs.500)\n");
    printf("S = Sandwiches (Rs.150)\n\n");

    printf("How many types of snacks you want to order: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        printf("\nEnter snack %d you want to order (B/F/P/S): ", i);
        scanf(" %c", &item);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch(item) {
            case 'B':
            case 'b':
                total += qty * 200;
                printf("%d Burger(s) added, cost = %d\n", qty, qty * 200);
                break;
            case 'F':
            case 'f':
                total += qty * 50;
                printf("%d French Fries added, cost = %d\n", qty, qty * 50);
                break;
            case 'P':
            case 'p':
                total += qty * 500;
                printf("%d Pizza(s) added, cost = %d\n", qty, qty * 500);
                break;
            case 'S':
            case 's':
                total += qty * 150;
                printf("%d Sandwich(es) added, cost = %d\n", qty, qty * 150);
                break;
            default:
                printf("Invalid choice! Skipped.\n");
        }
    }

    printf("\n----------------------------------------\n");
    printf("Total bill: Rs. %d\n", total);
    printf("Thank you for your order! Have a nice day.\n");

    return 0;
}
