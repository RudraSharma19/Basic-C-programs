// Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    
    printf("%d\n", count);
    return 0;
}
