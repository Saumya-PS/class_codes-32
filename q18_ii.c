#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char p[100];
    
    printf("Enter the string ");
    scanf("%s", str);
    
    printf("to delete ");
    scanf("%s", p);

    char *ptr = strstr(str, p);

    if (ptr != NULL) {
        int len = strlen(p);
        strcpy(ptr, ptr + len);
        printf("delete%s\n", str);
    } else {
        printf("not found\n");
    }

    return 0;
}
