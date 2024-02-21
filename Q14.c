#include <stdio.h>
#include <string.h>
void s(char str[], int i, int j);
void g(char str[], int s1, int s2);

int main() {
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    printf("%s\n", str);
    g(str, 0, n - 1);
    return 0;
}
void s(char str[], int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
l
void g(char str[], int s1, int s2) {
    if (s1 == s2) {
        printf("%s\n", str);
    } 
    else {
        for (int i = s1; i <= s2; i++) {
            s(str, s1, i);
            g(str, s1 + 1, s2);
            s(str, s1, i);
        }
    }
}
