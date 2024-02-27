#include <stdio.h>

int main() {
    char p[1000];
    int g = 0;
    
    printf("ping");
    fgets(p, sizeof(p), stdin);

    int i = 0;
    int n = 0;
    while (p[i] != '\0') {
        if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n') {
            if (n) {
                g++;
                n = 0;
            }
        } else {
            n = 1;
        }
        i++;
    }
    if (n) {
        g++;
    }

    printf("%d\n", g);

    return 0;
}
