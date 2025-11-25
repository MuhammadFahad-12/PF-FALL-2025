#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
    char department[50];
};

int main() {
    struct Employee emp[5];
    int highestIndex = 0;

    // Input 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        getchar();  
        fgets(emp[i].name, 50, stdin);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Department: ");
        getchar();  
        fgets(emp[i].department, 50, stdin);

        // Track highest salary
        if (emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }

    // Print employee with highest salary
    printf("\n--- Employee With Highest Salary ---\n");
    printf("Name      : %s", emp[highestIndex].name);
    printf("ID        : %d\n", emp[highestIndex].id);
    printf("Salary    : %.2f\n", emp[highestIndex].salary);
    printf("Department: %s", emp[highestIndex].department);

    return 0;
}