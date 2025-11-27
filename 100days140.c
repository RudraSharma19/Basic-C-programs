// Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
MALE,
FEMALE,
OTHER
};

struct Person {
char name[50];
enum Gender gender;
};

int main() {
struct Person p;
int g;

scanf("%d", &g);
p.gender = (enum Gender)g;

if (p.gender == MALE) {
    printf("Male");
} else if (p.gender == FEMALE) {
    printf("Female");
} else {
    printf("Other");
}

return 0;


}