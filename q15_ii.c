#include <stdio.h>
#include <string.h

int main() {
    char c[1000];
    printf("Enter a string: ");
    scanf("%s", c);
    int l = strlen(c);
    printf("Length %d\n", l);
    return 0;
}
