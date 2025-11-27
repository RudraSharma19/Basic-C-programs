// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int i = 0, start;
    while (str[i] != '\0' && str[i] != '\n') {
        // Skip spaces
        if (str[i] != ' ') {
            start = i;
            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                i++;
            }
            int end = i - 1;
            // Reverse the current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        } else {
            i++;
        }
    }
    
    printf("%s\n", str);
    return 0;
}
