#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];

    printf("Enter First Name: ");
    scanf("%s", first);

    printf("Enter Last Name: ");
    scanf("%s", last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Full Name: %s\n", full);
    printf("Total Characters (including space): %d\n", strlen(full));

    return 0;
}
