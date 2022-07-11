#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[100];
    scanf("%[^
]s",str);
    char result[30];
    for (int i = 0; str[i] != NULL; i++) {
        result[i] = tolower(str[i]);
    }
    printf("%s", result);
    return 0;
}