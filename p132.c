//read/write structure to a file in c
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
        printf("Error opening file for writing!\n");
        exit(1);
    }
    fwrite(students, sizeof(Student), n, file);
    fclose(file);
}

void readFromFile(char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    Student s;
    printf("\nStudent Records from File:\n");
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
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    writeToFile(students, n, filename);
    readFromFile(filename);

    return 0;
}
