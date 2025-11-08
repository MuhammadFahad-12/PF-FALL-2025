#include <stdio.h>

int main() {
    int m, n, i, j, zeroCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0)
                zeroCount++;
        }
    }

    if(zeroCount >= (m * n) / 2)
        printf("Matrix is Sparse.\n");
    else
        printf("Matrix is Not Sparse.\n");

    return 0;
}
