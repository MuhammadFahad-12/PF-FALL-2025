#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char username[10], password[10], user[10], pass[10];
    int i, hasDigit = 0, hasUpper = 0, hasLower = 0;

    // Username
    printf("Enter username (5 letters): ");
    scanf("%s", username);

    // Password
    while (1) {
        printf("Enter password (6 chars: 1 digit, 1 upper, 1 lower): ");
        scanf("%s", password);

        hasDigit = hasUpper = hasLower = 0;

        for (i = 0; password[i] != '\0'; i++) {
            if (isdigit(password[i])) hasDigit = 1;
            else if (isupper(password[i])) hasUpper = 1;
            else if (islower(password[i])) hasLower = 1;
        }

        if (strlen(password) == 6 && hasDigit && hasUpper && hasLower)
            break;
        else {
            printf("Invalid password! Try again.\n");
            continue;
        }
    }

    printf("Account created successfully!\n");

    // Login
    while (1) {
        printf("Enter username to login: ");
        scanf("%s", user);
        printf("Enter password: ");
        scanf("%s", pass);

        if (strcmp(user, username) == 0 && strcmp(pass, password) == 0) {
            printf("Welcome %s, you are now logged in.\n", username);
            break;
        } else {
            printf("Incorrect username or password. Try again.\n");
            continue;
        }
    }

    return 0;
}
