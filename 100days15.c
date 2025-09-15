#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (isupper(a)) {
        printf("Uppercase Alphabet\n");
    } 
    else if (islower(a)) {
        printf("Lowercase Alphabet\n");
    } 
    else if (isdigit(a)) {
        printf("Digit\n");
    } 
    else {
        printf("Special Character\n");
    }

    return 0;
}

