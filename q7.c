#include <stdio.h>
#include <string.h>

int main() {
    int r[20];
    char a[120], b[20];
    fgets(a, 120, stdin);
    int g = strlen(a);
    if (a[g - 1] == '\n') {
        a[g - 1] = ' ';
    }
    a[g] = '\0';
    int i = 0, s = 0, max = 0, m1 = -1, p = 1;
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
            if (strlen(b) == k) {
                r[s] = k;
                s++;
                if (k > max) {
                    max = k;
                    m1 = p;
                }
            }
            else {
                r[s] = 0;
                s++;
            }
        }
        i++;
        p++;
    }

    printf("L pall. size %d\n", max);
    if (m1 != -1) {
        printf("Word pos. \n%d", m1);
    }
    else {
        printf("No pall. found\n");
    }

    return 0;
}
