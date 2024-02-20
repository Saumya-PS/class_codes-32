#include <stdio.h>
#include <string.h>

int main() {
    char a[120], b[20];
    fgets(a, 120, stdin);
    int g = strlen(a);
    if (a[g - 1] == '\n') {
        a[g - 1] = ' ';
    }
    a[g] = '\0';
    int i = 0, ml = 120, m1 = -1, p = 0, s = 0, c1 = 0;
    while (a[i] != '\0') {
        int j = 0, c = 0;
        while (a[i] != ' ' && a[i] != '\0') {
            c++;
            i++;
        }
        i -= c;
        for (j = 0; j < c; j++) {
            b[j] = a[i];
            i++;
        }
        b[j] = '\0';
        j = 0, i -= c;
        if (a[i] == b[j]) {
            int k = 0;
            while (a[i] != ' ' && b[j] != ' ' && b[j] != '\0') {
                if (a[i++] == b[j++]) {
                    k++;
                }
            }
            if (strlen(b) == k && strlen(b) < ml) {
                ml = strlen(b);
                m1 = p;
                s = i - k - s;
                c1 = i - 1;
            }
        }
        i++;
        p++;
    }
    
    if (m1 != -1) {
        for (int j = s; j <= g - (c1 - s + 1); j++) {
            a[j] = a[j + (c1 - s + 1)];
        }
        printf("short pall. no %.*s\n", c1 - s + 1, &a[s]);
    }
    else {
        printf("No pall. found\n");
    }

    return 0;
}
