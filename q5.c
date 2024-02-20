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

    int i = 0;
    while (a[i] != '\0') {
        int p = 0;
        while (a[i] != ' ' ) {
            b[p] = a[i];
            p++, i++;
        }
        b[p] = '\0'; 

        int j = 0;
        if (b[0] == 'a' || b[0] == 'e' || b[0] == 'i' || b[0] == 'o' || b[0] == 'u' ||
            b[0] == 'A' || b[0] == 'E' || b[0] == 'I' || b[0] == 'O' || b[0] == 'U') {
                strcat(b,"yay");
        } else {
            char s = b[0];
            int h= strlen(b);
            for (int k = 0; k < h - 1; k++) {
                b[k] = b[k + 1];
            }
            b[h -1] = s;
            b[h] = 'a';
            b[h+1] = 'y';
            b[h + 2] = '\0';
            puts(b);
        }
        i++;
    }

    return 0;
}

