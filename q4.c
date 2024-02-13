#include <stdio.h>

void s(int m, int n, int ar[m][n]) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m - 1; i++) {
            for (int k = i + 1; k < m; k++) {
                if (ar[i][j] > ar[k][j]) {
                    int temp = ar[i][j];
                    ar[i][j] = ar[k][j];
                    ar[k][j] = temp;
                }
            }
        }
    }
}

int main() {
    int m, n;
    printf("rows");
    scanf("%d", &m);
    printf("col ");
    scanf("%d", &n);

    int ar[m][n];

    printf("elementt \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("elementt at %d, %d ", i+1, j+1);
            scanf("%d", &ar[i][j]);
        }
    }


    s(m, n, ar);

    printf("2D array\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
