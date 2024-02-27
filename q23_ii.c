#include <stdio.h>
#include <string.h>

void low(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

void top(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[1000];
    int g;
    printf("1 for lower to upper and 0 for upper to lower");
    scanf("%d", &g);
    printf("string");
    scanf("%s", str);
    if (g == 1) {
        top(str);
    } else if (g == 0) {
        low(str);
    }
    printf("%s\n", str);
    return 0;
}
