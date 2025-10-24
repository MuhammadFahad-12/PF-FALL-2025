#include <stdio.h>

int main() {
    float nts, fsc;

    printf("Enter NTS marks percentage: ");
    scanf("%f", &nts);
    printf("Enter F.Sc marks percentage: ");
    scanf("%f", &fsc);

    printf("\n--- University and Department Allocation ---\n");

    if(fsc > 70 && nts > 70)
        printf("Oxford University - IT Department\n");
    else if(fsc > 70 && nts > 60)
        printf("Oxford University - Electronics Department\n");
    else if(fsc > 70 && nts > 50)
        printf("Oxford University - Telecommunication Department\n");
    else if(fsc >= 60 && nts >= 50)
        printf("MIT University - IT Department\n");
    else if(fsc >= 50 && nts >= 50)
        printf("MIT University - Chemical Department\n");
    else if(fsc > 40 && fsc < 50 && nts >= 50)
        printf("MIT University - Computer Department\n");
    else
        printf("Sorry, no department allocated.\n");

    return 0;
}
