// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20], day[3], month[3], year[5];
    
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    
    sscanf(date, "%2s/%2s/%4s", day, month, year);
    
    if (strcmp(month, "04") == 0) {
        printf("%s-Apr-%s\n", day, year);
    } else {
        printf("Invalid month format\n");
    }
    
    return 0;
}
