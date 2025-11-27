// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    // Writing student records to file
    fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }
    fprintf(fp, "Asha %d %d\n", 101, 85);
    fprintf(fp, "Ravi %d %d\n", 102, 92);
    fclose(fp);

    // Reading student records from file
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
