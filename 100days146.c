// Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
int day;
int month;
int year;
};

struct Employee {
char name[50];
int id;
struct Date joiningDate;
};

int main() {
struct Employee e;

printf("Enter name, id, joining date (dd mm yyyy): ");
scanf("%s %d %d %d %d",
      e.name,
      &e.id,
      &e.joiningDate.day,
      &e.joiningDate.month,
      &e.joiningDate.year);

printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
       e.name,
       e.id,
       e.joiningDate.day,
       e.joiningDate.month,
       e.joiningDate.year);

return 0;


}