// Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Capitalize first character if it's a letter
    if(str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Capitalize first letter after space and keep others lowercase
    for(i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
