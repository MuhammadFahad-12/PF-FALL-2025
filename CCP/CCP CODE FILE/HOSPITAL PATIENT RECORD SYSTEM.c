#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100
#define MAX_NAME 50

// Function declarations
void addPatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int *count);
void displayPatients(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int count);
void searchPatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int count);
void deletePatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int *count);
void generateReport(int ages[], int count);

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
        printf("5. Generate Report\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addPatient(names, ages, diseases, &count);
                break;
            case 2:
                displayPatients(names, ages, diseases, count);
                break;
            case 3:
                searchPatient(names, ages, diseases, count);
                break;
            case 4:
                deletePatient(names, ages, diseases, &count);
                break;
            case 5:
                generateReport(ages, count);
                break;
            case 6:
                printf("Exiting program... Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}

// Function to add a new patient
void addPatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int *count) {
    if (*count >= MAX_PATIENTS) {
        printf("Cannot add more patients. Storage full.\n");
        return;
    }

    printf("Enter patient name (one word): ");
    scanf("%s", names[*count]);

    printf("Enter patient age: ");
    scanf("%d", &ages[*count]);

    printf("Enter disease (one word): ");
    scanf("%s", diseases[*count]);

    (*count)++;
    printf("Patient added successfully!\n");
}

// Function to display all patients
void displayPatients(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int count) {
    if (count == 0) {
        printf("No patients to display.\n");
        return;
    }

    printf("\n--- Patient List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Patient %d:\n", i + 1);
        printf("Name: %s\n", names[i]);
        printf("Age: %d\n", ages[i]);
        printf("Disease: %s\n\n", diseases[i]);
    }
}

// Function to search for a patient by name
void searchPatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int count) {
    if (count == 0) {
        printf("No patients to search.\n");
        return;
    }

    char searchName[MAX_NAME];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("\nPatient Found:\n");
            printf("Name: %s\n", names[i]);
            printf("Age: %d\n", ages[i]);
            printf("Disease: %s\n", diseases[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found.\n");
}

// Function to delete a patient by name
void deletePatient(char names[][MAX_NAME], int ages[], char diseases[][MAX_NAME], int *count) {
    if (*count == 0) {
        printf("No patients to delete.\n");
        return;
    }

    char deleteName[MAX_NAME];
    int found = 0;

    printf("Enter name to delete: ");
    scanf("%s", deleteName);

    for (int i = 0; i < *count; i++) {
        if (strcmp(names[i], deleteName) == 0) {
            for (int j = i; j < *count - 1; j++) {
                strcpy(names[j], names[j + 1]);
                ages[j] = ages[j + 1];
                strcpy(diseases[j], diseases[j + 1]);
            }
            (*count)--;
            found = 1;
            printf("Patient deleted successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Patient not found.\n");
}

// Function to generate report
void generateReport(int ages[], int count) {
    if (count == 0) {
        printf("No data to generate report.\n");
        return;
    }

    int totalAge = 0, oldest = ages[0], youngest = ages[0];

    for (int i = 0; i < count; i++) {
        totalAge += ages[i];
        if (ages[i] > oldest)
            oldest = ages[i];
        if (ages[i] < youngest)
            youngest = ages[i];
    }

    float average = (float)totalAge / count;

    printf("\n===== HOSPITAL REPORT =====\n");
    printf("Total Patients: %d\n", count);
    printf("Average Age: %.2f\n", average);
    printf("Oldest Patient Age: %d\n", oldest);
    printf("Youngest Patient Age: %d\n", youngest);
    printf("===========================\n");
}