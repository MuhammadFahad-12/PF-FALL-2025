#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[n][n], t[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != t[i][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag) {
        printf("Matrix is Symmetric.\n");
    } else {
        printf("Matrix is Asymmetric.\n");
    }

    return 0;
}
