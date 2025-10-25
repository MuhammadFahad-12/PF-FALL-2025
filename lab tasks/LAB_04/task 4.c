#include <stdio.h>
int main()

{
    char isFever, isFlu, isCough;
    
    printf("Covid-19 Predictor\n");

    printf("You have fever? (Y/N): ");
    scanf(" %c", &isFever); // space before %c fixes newline issue

    printf("You have flu? (Y/N): ");
    scanf(" %c", &isFlu);

    printf("You have cough? (Y/N): ");
    scanf(" %c", &isCough);

    if ((isFever == 'Y' || isFever == 'y') &&
        (isFlu == 'Y' || isFlu == 'y') &&
        (isCough == 'Y' || isCough == 'y'))
    {
        printf("You are infected.\n");
    }
    else if (isFever == 'Y' || isFever == 'y')
    {
        printf("You have fever only.\n");
    }
    else if (isFlu == 'Y' || isFlu == 'y')
    {
        printf("You have flu only.\n");
    }
    else if (isCough == 'Y' || isCough == 'y')
    {
        printf("You have cough only.\n");
    }
    else
    {
        printf("You are alright.\n");
    }

    return 0;
}
