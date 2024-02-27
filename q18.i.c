#include <stdio.h>

int main() {
    char str[1000];
    char p[100];
    
    printf("Enter the string ");
    scanf("%s", str);
    
    printf("Enter to delete ");
    scanf("%s", p);
    
    int i, j, k;
    int g = 0;

    for (i = 0; str[i] != '\0'; i++) {
        g = 1;
        for (j = 0, k = i; p[j] != '\0'; j++, k++) {
            if (str[k] != p[j]) {
                g = 0;
                break;
            }
        }
        if (g) {
            for (j = i, k = i + strlen(p); str[k] != '\0'; j++, k++) {
                str[j] = str[k];
            }
            str[j] = '\0'; 
            break;
        }
    }

    if (g) {
        printf("After deleting  %s\n", str);
    } else {
        printf("not found\n");
    }

    return 0;
}
