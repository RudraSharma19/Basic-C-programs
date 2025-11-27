// Q85: Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    char rev[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';
    
    printf("%s\n", rev);
    return 0;
}
