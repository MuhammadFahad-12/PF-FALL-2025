#include <stdio.h>

int main() {
    int r, c, i, j, max;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];

    printf("\nEntered Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
            if(a[i][j] > max)
                max = a[i][j];
        }
        printf("\n");
    }

    printf("\nMaximum Element = %d\n", max);

    return 0;
}
