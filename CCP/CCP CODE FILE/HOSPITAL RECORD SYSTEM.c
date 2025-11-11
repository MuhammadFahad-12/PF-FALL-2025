#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_NAME 50

int main() {
    char names[MAX_PATIENTS][MAX_NAME];
    char diseases[MAX_PATIENTS][MAX_NAME];
    int ages[MAX_PATIENTS];
    int count = 0;
    int choice;

    do {
        printf("\n===== HOSPITAL PATIENT RECORD SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. Display All Patients\n");
        printf("3. Search Patient by Name\n");
        printf("4. Delete Patient by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(count >= MAX_PATIENTS) {
                printf("Cannot add more patients. Storage full.\n");
            } else {
                printf("Enter patient name (one word): ");
                scanf("%s", names[count]);

                printf("Enter patient age: ");
                scanf("%d", &ages[count]);

                printf("Enter disease (one word): ");
                scanf("%s", diseases[count]);

                count++;
                printf("Patient added successfully!\n");
            }
        }

        else if(choice == 2) {
            if(count == 0) {
                printf("No patients to display.\n");
            } else {
                printf("\n--- Patient List ---\n");
                for(int i = 0; i < count; i++) {
                    printf("Patient %d:\n", i + 1);
                    printf("Name: %s\n", names[i]);
                    printf("Age: %d\n", ages[i]);
                    printf("Disease: %s\n\n", diseases[i]);
                }
            }
        }

        else if(choice == 3) {
            if(count == 0) {
                printf("No patients to search.\n");
            } else {
                char searchName[MAX_NAME];
                int found = 0;

                printf("Enter name to search: ");
                scanf("%s", searchName);

                for(int i = 0; i < count; i++) {
                    if(strcmp(names[i], searchName) == 0) {
                        printf("\nPatient Found:\n");
                        printf("Name: %s\n", names[i]);
                        printf("Age: %d\n", ages[i]);
                        printf("Disease: %s\n", diseases[i]);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Patient not found.\n");
            }
        }

        else if(choice == 4) {
            if(count == 0) {
                printf("No patients to delete.\n");
            } else {
                char deleteName[MAX_NAME];
                int found = 0;

                printf("Enter name to delete: ");
                scanf("%s", deleteName);

                for(int i = 0; i < count; i++) {
                    if(strcmp(names[i], deleteName) == 0) {
                        // Shift remaining records up
                        for(int j = i; j < count - 1; j++) {
                            strcpy(names[j], names[j + 1]);
                            ages[j] = ages[j + 1];
                            strcpy(diseases[j], diseases[j + 1]);
                        }
                        count--;
                        found = 1;
                        printf("Patient deleted successfully!\n");
                        break;
                    }
                }

                if(!found)
                    printf("Patient not found.\n");
            }
        }

        else if(choice == 5) {
            printf("Exiting program... Goodbye!\n");
        }

        else {
            printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}