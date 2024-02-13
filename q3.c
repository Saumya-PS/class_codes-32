#include <stdio.h>

void s(int n, int row[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                
                int temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
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

    printf("elements\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("elementt at %d, %d ", i+1, j+1);
            scanf("%d", &ar[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        s(n, ar[i]);
    }

    printf("2D array\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
