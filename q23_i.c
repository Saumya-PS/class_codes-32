#include <stdio.h>

int main() {
    char str[1000];
    int g;

    printf("1 for lower to upper and 0 for upper to lower");
    scanf("%d", &g);

    printf("string");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        if (g == 1) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        } else if (g == 0) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
