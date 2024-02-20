#include <stdio.h>
#include <string.h>

int main() {
    char arr[120];
    fgets(arr, 120, stdin);

    int n = strlen(arr);
    if (arr[n - 1] == '\n') {
        arr[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%s\n", arr);

    return 0;
}
