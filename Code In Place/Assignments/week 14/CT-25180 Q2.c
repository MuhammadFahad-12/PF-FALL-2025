#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];

    // Input data
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Title: ");
        getchar();  // clear newline
        fgets(books[i].title, 50, stdin);

        printf("Author: ");
        fgets(books[i].author, 50, stdin);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Print data
    printf("\n--- All Books ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Price : %.2f\n", books[i].price);
    }

    return 0;
}