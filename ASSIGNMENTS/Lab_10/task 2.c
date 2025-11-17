#include <stdio.h>

void jobPosition(int marks, int exp) {
    if (marks >= 70 && exp >= 2)
        printf("Position Assigned: Senior Associate Developer\n");
    else if (marks >= 60 && exp >= 1)
        printf("Position Assigned: Assistant Developer\n");
    else if (marks >= 50)
        printf("Position Assigned: Trainee Engineer\n");
    else
        printf("Not selected.\n");
}

int main() {
    int marks, experience;

    printf("Enter test marks: ");
    scanf("%d", &marks);

    printf("Enter years of experience: ");
    scanf("%d", &experience);

    jobPosition(marks, experience);

    return 0;
}
