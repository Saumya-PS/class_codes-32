#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int h = 0;
    int len, i;
    int n = 0;

    printf("string");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (n) {
                h++;
                n = 0;
            }
        } else {
            n = 1;
        }
    }
    if (n) {
        h++;
    }

    printf("%d\n", h);

    return 0;
}
