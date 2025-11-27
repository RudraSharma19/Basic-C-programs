// Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    int i = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        if (i == 0 || name[i-1] == ' ') {
            if (name[i] >= 'a' && name[i] <= 'z') {
                printf("%c.", name[i] - ('a' - 'A'));
            } else if ((name[i] >= 'A' && name[i] <= 'Z')) {
                printf("%c.", name[i]);
            }
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
