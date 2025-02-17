//read write structure to a file
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

void writeToFile(Student students[], int n, char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fwrite(students, sizeof(Student), n, file);
    fclose(file);
}

void readFromFile(char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    Student s;
    while (fread(&s, sizeof(Student), 1, file)) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);
}

int main() {
    int n;
    char filename[] = "students.dat";

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Roll No, and Marks for student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    writeToFile(students, n, filename);
    readFromFile(filename);

    return 0;
}
