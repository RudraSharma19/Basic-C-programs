// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';
    
    int i = 0, lastSpace = -1;
    // Find the last space to separate surname
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }
    
    // Print initials for all words except the last one
    i = 0;
    while (i <= lastSpace) {
        if (i == 0 || name[i-1] == ' ') {
            if (name[i] >= 'a' && name[i] <= 'z') {
                printf("%c.", name[i] - ('a' - 'A'));
            } else if (name[i] >= 'A' && name[i] <= 'Z') {
                printf("%c.", name[i]);
            }
        }
        i++;
    }
    
    // Print the surname in full
    if (lastSpace != -1) {
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        printf("\n");
    }
    
    return 0;
}
