#include <stdio.h>
#include <string.h>

int main() {
    char h[1000];
    int n = 0, g = 0;

    printf("string");
    scanf("%s", h);

    int len = strlen(h);
    for (int i = 0; i < len; i++) {
        char c = h[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                n++;
            }
        } else if (c >= '0' && c <= '9') {
            g++;
        }
    }

    printf("%d %d", n, g);

    return 0;
}
