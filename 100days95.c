// Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }
    
    strcpy(combined, str1);
    strcat(combined, str1);  // str1 concatenated with itself
    
    if (strstr(combined, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}
