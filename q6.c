#include <stdio.h>
#include <string.h>

int main() {
    char a[120], b[20];
    fgets(a, 120, stdin);
    fgets(b, 20, stdin);
    int g = strlen(a);
    if (a[g - 1] == '\n') {
        a[g - 1] = '\0';
    }
    int k = strlen(b);
    if (b[k - 1] == '\n') {
        b[k - 1] = '\0';
    }
    
    int i = 0;
    while (a[i] != '\0') {
        int j = 0;
        int m = 0;
        while (a[i] != '\0' && a[i] != ' ' && b[j] != '\0' && b[j] != ' ') {
            if (a[i] == b[j]) {
                while (a[i] == b[j] ) {
                    i++;
                    j++;
                    m++;
                }
                if (strlen(b) == m) {
                    printf("Found at ");
                }
            } else {
                j = 0;
                m = 0;
                i++;
            }
        }
            i++;
        
    }
    return 0;
}
