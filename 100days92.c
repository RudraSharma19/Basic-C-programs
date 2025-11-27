// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    char repeat = '\0';
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                repeat = ch;
                break;
            }
        }
        i++;
    }
    
    if (repeat != '\0') {
        printf("%c\n", repeat);
    } else {
        printf("No repeating lowercase alphabet\n");
    }
    
    return 0;
}
