//store student record as structure and sort them by age or id
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    int age;
    float marks;
} Student;

void sortByID(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].id > students[j].id) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByAge(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].age > students[j].age) {
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
        printf("ID: %d, Name: %s, Age: %d, Marks: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].marks);
    }
}

int main() {
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nSort by:\n1. ID\n2. Age\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        sortByID(students, n);
    else if (choice == 2)
        sortByAge(students, n);
    else {
        printf("Invalid choice! Sorting by ID by default.\n");
        sortByID(students, n);
    }

    printStudents(students, n);

    return 0;
}
