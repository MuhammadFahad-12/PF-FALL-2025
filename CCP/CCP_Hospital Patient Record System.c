#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DATAFILE "patients.dat"
#define CSVFILE  "patients_export.csv"
#define MAX_NAME 100
#define MAX_DISEASE 100

typedef struct {
    int id;
    char name[MAX_NAME];
    int age;
    char gender; 
    char disease[MAX_DISEASE];
} Patient;

void read_line(char *buffer, size_t size) {
    if (!fgets(buffer, (int)size, stdin)) {
        buffer[0] = '\0';
        return;
    }
    size_t len = strlen(buffer);
    if (len && buffer[len - 1] == '\n') buffer[len - 1] = '\0';
}

void trim(char *s) {
    char *end;
    while (isspace((unsigned char)*s)) s++;
    if (*s == 0) { *s = '\0'; return; }
    end = s + strlen(s) - 1;
    while (end > s && isspace((unsigned char)*end)) end--;
    *(end + 1) = '\0';
}


int next_id() {
    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) return 1; 
    Patient p;
    int max = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        if (p.id > max) max = p.id;
    }
    fclose(fp);
    return max + 1;
}


void add_patient() {
    Patient p;
    p.id = next_id();
    printf("Enter patient name: ");
    read_line(p.name, sizeof(p.name));
    trim(p.name);
    if (strlen(p.name) == 0) { printf("Name cannot be empty. Aborted.\n"); return; }

    char agebuf[32];
    printf("Enter age: ");
    read_line(agebuf, sizeof(agebuf));
    p.age = atoi(agebuf);

    char gbuf[8];
    printf("Enter gender (M/F/O): ");
    read_line(gbuf, sizeof(gbuf));
    p.gender = toupper((unsigned char)gbuf[0]);
    if (p.gender != 'M' && p.gender != 'F' && p.gender != 'O') p.gender = 'O';

    printf("Enter disease/diagnosis: ");
    read_line(p.disease, sizeof(p.disease));
    trim(p.disease);

    FILE *fp = fopen(DATAFILE, "ab");
    if (!fp) {
        perror("Unable to open data file for writing");
        return;
    }
    fwrite(&p, sizeof(Patient), 1, fp);
    fclose(fp);
    printf("Patient added with ID: %d\n", p.id);
}

void print_patient(const Patient *p) {
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Gender: %c\n", p->gender);
    printf("Disease: %s\n", p->disease);
    printf("-------------------------------\n");
}

void list_all() {
    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) {
        printf("No records found.\n");
        return;
    }
    Patient p;
    int count = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        print_patient(&p);
        count++;
    }
    fclose(fp);
    if (count == 0) printf("No records found.\n");
}

void search_by_id() {
    char idbuf[32];
    printf("Enter Patient ID to search: ");
    read_line(idbuf, sizeof(idbuf));
    int id = atoi(idbuf);
    if (id <= 0) { printf("Invalid ID.\n"); return; }

    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) { printf("No records found.\n"); return; }
    Patient p;
    int found = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        if (p.id == id) {
            print_patient(&p);
            found = 1;
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Patient with ID %d not found.\n", id);
}

int strcasestr_exists(const char *haystack, const char *needle) {
    if (!*needle) return 1;
    for (; *haystack; haystack++) {
        const char *h = haystack;
        const char *n = needle;
        while (*h && *n && tolower((unsigned char)*h) == tolower((unsigned char)*n)) {
            h++; n++;
        }
        if (!*n) return 1;
    }
    return 0;
}

void search_by_disease() {
    char q[MAX_DISEASE];
    printf("Enter disease or keyword to search: ");
    read_line(q, sizeof(q));
    trim(q);
    if (strlen(q) == 0) { printf("Search string empty.\n"); return; }

    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) { printf("No records found.\n"); return; }
    Patient p;
    int found = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        if (strcasestr_exists(p.disease, q)) {
            print_patient(&p);
            found = 1;
        }
    }
    fclose(fp);
    if (!found) printf("No patients found matching \"%s\".\n", q);
}

void edit_patient() {
    char idbuf[32];
    printf("Enter Patient ID to edit: ");
    read_line(idbuf, sizeof(idbuf));
    int id = atoi(idbuf);
    if (id <= 0) { printf("Invalid ID.\n"); return; }

    FILE *fp = fopen(DATAFILE, "rb+");
    if (!fp) { printf("No records found.\n"); return; }

    Patient p;
    int found = 0;
    long pos;
    while ((pos = ftell(fp)), fread(&p, sizeof(Patient), 1, fp) == 1) {
        if (p.id == id) {
            found = 1;
            printf("Current details:\n");
            print_patient(&p);

            printf("Enter new name (leave blank to keep): ");
            char tmp[MAX_NAME];
            read_line(tmp, sizeof(tmp));
            trim(tmp);
            if (strlen(tmp)) strncpy(p.name, tmp, MAX_NAME);

            printf("Enter new age (leave blank to keep): ");
            char agebuf[32];
            read_line(agebuf, sizeof(agebuf));
            if (strlen(agebuf)) p.age = atoi(agebuf);

            printf("Enter new gender (M/F/O) (leave blank to keep): ");
            char gbuf[8];
            read_line(gbuf, sizeof(gbuf));
            if (strlen(gbuf)) {
                char gg = toupper((unsigned char)gbuf[0]);
                if (gg == 'M' || gg == 'F' || gg == 'O') p.gender = gg;
            }

            printf("Enter new disease (leave blank to keep): ");
            char dbuf[MAX_DISEASE];
            read_line(dbuf, sizeof(dbuf));
            trim(dbuf);
            if (strlen(dbuf)) strncpy(p.disease, dbuf, MAX_DISEASE);

        
            fseek(fp, pos, SEEK_SET);
            fwrite(&p, sizeof(Patient), 1, fp);
            fflush(fp);
            printf("Record updated.\n");
            break;
        }
    }
    fclose(fp);
    if (!found) printf("Patient with ID %d not found.\n", id);
}

void delete_patient() {
    char idbuf[32];
    printf("Enter Patient ID to delete: ");
    read_line(idbuf, sizeof(idbuf));
    int id = atoi(idbuf);
    if (id <= 0) { printf("Invalid ID.\n"); return; }

    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) { printf("No records found.\n"); return; }

    FILE *tmp = fopen("tmp.dat", "wb");
    if (!tmp) { fclose(fp); perror("Unable to create temp file"); return; }

    Patient p;
    int found = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        if (p.id == id) {
            found = 1; 
        } else {
            fwrite(&p, sizeof(Patient), 1, tmp);
        }
    }
    fclose(fp);
    fclose(tmp);

    if (!found) {
        remove("tmp.dat");
        printf("Patient with ID %d not found.\n", id);
        return;
    }

  
    if (remove(DATAFILE) != 0) {
        perror("Failed to remove original data file");
    }
    if (rename("tmp.dat", DATAFILE) != 0) {
        perror("Failed to rename temp file");
    } else {
        printf("Patient with ID %d deleted.\n", id);
    }
}

void export_csv() {
    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) { printf("No records to export.\n"); return; }
    FILE *csv = fopen(CSVFILE, "w");
    if (!csv) { fclose(fp); perror("Unable to create CSV file"); return; }
    fprintf(csv, "ID,Name,Age,Gender,Disease\n");
    Patient p;
    int count = 0;
    while (fread(&p, sizeof(Patient), 1, fp) == 1) {
        
        char name_safe[MAX_NAME*2];
        char dis_safe[MAX_DISEASE*2];
        int i, j;
        for (i = 0, j = 0; p.name[i] && j < (int)sizeof(name_safe)-1; ++i) {
            if (p.name[i] == '"') { name_safe[j++] = '"'; if (j < (int)sizeof(name_safe)-1) name_safe[j++] = '"'; }
            else name_safe[j++] = p.name[i];
        }
        name_safe[j] = '\0';
        for (i = 0, j = 0; p.disease[i] && j < (int)sizeof(dis_safe)-1; ++i) {
            if (p.disease[i] == '"') { dis_safe[j++] = '"'; if (j < (int)sizeof(dis_safe)-1) dis_safe[j++] = '"'; }
            else dis_safe[j++] = p.disease[i];
        }
        dis_safe[j] = '\0';

        fprintf(csv, "%d,\"%s\",%d,%c,\"%s\"\n", p.id, name_safe, p.age, p.gender, dis_safe);
        count++;
    }
    fclose(fp);
    fclose(csv);
    printf("Exported %d records to %s\n", count, CSVFILE);
}

void show_menu() {
    printf("\n==== Hospital Patient Record System ====\n");
    printf("1. Add new patient\n");
    printf("2. List all patients\n");
    printf("3. Search by Patient ID\n");
    printf("4. Search by Disease\n");
    printf("5. Edit patient record\n");
    printf("6. Delete patient record\n");
    printf("7. Export to CSV\n");
    printf("0. Exit\n");
    printf("Select option: ");
}

int main(void) {
    while (1) {
        show_menu();
        char optbuf[16];
        read_line(optbuf, sizeof(optbuf));
        int opt = atoi(optbuf);
        switch (opt) {
            case 1: add_patient(); break;
            case 2: list_all(); break;
            case 3: search_by_id(); break;
            case 4: search_by_disease(); break;
            case 5: edit_patient(); break;
            case 6: delete_patient(); break;
            case 7: export_csv(); break;
            case 0:
                printf("Goodbye.\n");
                exit(0);
            default:
                printf("Invalid option. Try again.\n");
        }
    }
    return 0;
}
