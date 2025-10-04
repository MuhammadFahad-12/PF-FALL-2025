#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
        printf("Small alphabet\n");
    else if(ch >= 'A' && ch <= 'Z')
        printf("Capital alphabet\n");
    else if(ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}
