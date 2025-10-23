#include <stdio.h>

int main() {
    char choice;

    printf("Are you sure you want to delete? [Y/N]: ");
    scanf(" %c", &choice);

    switch(choice) {
        case 'Y':
        case 'y':
            printf("Deleted successfully.\n");
            break;
        case 'N':
        case 'n':
            printf("Delete cancelled.\n");
            break;
        default:
            printf("Invalid choice! Please enter Y or N.\n");
    }
    return 0;
}


