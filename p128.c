//store student records as structures and sort them by name
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void printStudents(Student students[], int n) {
    printf("\nSorted Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
}

int main() {
    int n;

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

    sortStudents(students, n);
    printStudents(students, n);

    return 0;
}
