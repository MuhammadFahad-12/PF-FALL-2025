#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b1;

    // Assign values
    printf("Enter title: ");
    fgets(b1.title, 50, stdin);

    printf("Enter author: ");
    fgets(b1.author, 50, stdin);

    printf("Enter price: ");
    scanf("%f", &b1.price);

    // Print values
    printf("\n--- Book Details ---\n");
    printf("Title : %s", b1.title);
    printf("Author: %s", b1.author);
    printf("Price : %.2f\n", b1.price);

    return 0;
}