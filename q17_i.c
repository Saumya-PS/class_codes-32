#include <stdio.h>

int main() {
    char a[1000];
    scanf("%s", a);
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            a[i] = '$';
        }
        i++;
    }
    printf("%s\n", a);
    return 0;
}
