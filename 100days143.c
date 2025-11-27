// Q143: Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
char name[50];
int roll;
int marks;
};

int main() {
int n, i, topIndex = 0;
struct Student s[100];

scanf("%d", &n);
for (i = 0; i < n; i++) {
    scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    if (s[i].marks > s[topIndex].marks) {
        topIndex = i;
    }
}

printf("Topper: %s (Marks: %d)", s[topIndex].name, s[topIndex].marks);

return 0;


}