#include <stdio.h>
void mirror(int m, int n, int arr[m][n]) {
    printf("Mirror Operation:\n");
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void reverse(int m, int n, int arr[m][n]) {
    printf("Revese\n");
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void vertical(int m, int n, int arr[m][n]) {
    printf("Vertical\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[m - i - 1][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("r&c");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("element\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    mirror(m, n, arr);
    reverse(m, n, arr);
    vertical(m, n, arr);

    return 0;
}
