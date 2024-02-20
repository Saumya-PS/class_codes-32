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

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!(arr[i] == ' ' && arr[i + 1] == ' ')) {
            arr[j++] = arr[i];
        }
    }
    arr[j] = '\0';

    printf("%s\n", arr);

    return 0;
}
