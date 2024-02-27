#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    int i = 0, l = 0;
    printf("Enter a string: ");
    scanf("%s", c);
    while(c[i] != '\0') {
        l++;
        i++;
    }
    printf("Length %d\n", l);
    return 0;
}
