#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];

    printf("Enter a string: ");
    scanf("%s", c);

    int p = strlen(c);
    int i, j;
    for (i = 0, j = p - 1; i < j; i++, j--) {
        char temp = c[i];
        c[i] = c[j];
        c[j] = temp;
    }

    printf("%s\n", c);

    return 0;
}
