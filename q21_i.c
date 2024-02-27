#include <stdio.h>

int main() {
    char c;
    int vowels = 0, digits = 0;

    printf("string ");
    scanf("%c", &c);
    while (c != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            }
        } else if (c >= '0' && c <= '9') {
            digits++;
        }
        scanf("%c", &c);
    }

    printf("%d %d", vowels, digits);

    return 0;
}
