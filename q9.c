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
    
    // Counting
    int c[26] = {0};
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            c[arr[i] - 'a']++;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            c[arr[i] - 'A']++;
        }
    }
    //repeating alpha.
    int m = 0;
    for (int i = 0; i < 26; i++) {
        if (c[i] > m) {
            m = c[i];
        }
    }
    
    // Deletion
    for (int i = 0; i < n; i++) {
        if (!((arr[i] >= 'a' && arr[i] <= 'z' && c[arr[i] - 'a'] == m) ||
              (arr[i] >= 'A' && arr[i] <= 'Z' && c[arr[i] - 'A'] == m))) {
            printf("%c", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
