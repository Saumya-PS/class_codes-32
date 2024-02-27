#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    
    printf("first");
    scanf("%s", s1);
    
    printf("second");
    scanf("%s", s2);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        char c1 = s1[i], c2 = s2[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;
        if (c1 != c2) {
            printf("not same\n");
            return 0;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("same\n");
    } else {
        printf("not same\n");
    }

    return 0;
}
