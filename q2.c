// array of m*n dimensions
#include <stdio.h>

void ar(int m, int n, int a[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("at position %d, %d ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

int main() {
    int m, n;
    printf("rows: ");
    scanf("%d", &m);
    printf("col: ");
    scanf("%d", &n);
    
    int a[m][n];
    ar(m, n, a);
    printf("2D array \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
