#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    
    printf("str");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }

    printf("%s\n", str);

    return 0;
}
