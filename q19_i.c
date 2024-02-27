#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    
    printf("first");
    scanf("%s", s1);
    
    printf("second ");
    scanf("%s", s2);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if ((s1[i] >= 'a' && s1[i] <= 'z' ? s1[i] : s1[i] + 32) !=
            (s2[i] >= 'a' && s2[i] <= 'z' ? s2[i] : s2[i] + 32)) {
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
