#include <stdio.h>
#include <string.h>

int main() {
    char name[100], courses[300];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter your Name: ");
    gets(name);

    printf("Enter Courses Offered (in one line): ");
    gets(courses);

    strcat(name, courses);  // Combine both strings to count frequencies together

    for(i = 0; name[i] != '\0'; i++) {
        freq[(unsigned char)name[i]]++;
        if(name[i] != ' ' && freq[(unsigned char)name[i]] > max) {
            max = freq[(unsigned char)name[i]];
            maxChar = name[i];
        }
    }

    printf("Character '%c' occurs maximum times = %d\n", maxChar, max);

    return 0;
}
