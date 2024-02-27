#include <stdio.h>

int main() {
    char c[1000];
    char r[1000];
    int i, p = 0;
    printf("Enter string");
    scanf("%s", c);
    while (c[p] != '\0') {
        p++;
    }
    for (i = 0; i < p; i++) {
        r[i] = c[p - i - 1];
    }
    r[p] = '\0'; 
    printf("r string: %s\n", r);

    return 0;
}
