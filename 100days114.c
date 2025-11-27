// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int lastIndex[256]; // to store last index of characters
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; i < 256; i++) lastIndex[i] = -1;

    for(i = 0; s[i] != '\0'; i++) {
        if(lastIndex[(int)s[i]] >= start) {
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;
        if(i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
