#include <stdio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    switch(ch){ /* Switch ch value */
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel");
            break;
        default: printf("Consonant");
    }
return 0;
}

