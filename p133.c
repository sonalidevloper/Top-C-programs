//flexible array members in a structure in c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int size;
    char name[];  // Flexible Array Member (FAM)
} Student;

int main() {
    int nameLength;
    printf("Enter the length of student name: ");
    scanf("%d", &nameLength);

    // Allocate memory dynamically for structure + flexible array
    Student *s = (Student *)malloc(sizeof(Student) + nameLength * sizeof(char));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    s->id = 101;
    s->size = nameLength;
    printf("Enter student name: ");
    scanf("%s", s->name);  // Store name in flexible array

    // Display details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);

    // Free allocated memory
    free(s);

    return 0;
}
