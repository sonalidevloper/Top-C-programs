//print all the patterns that match given patterns from a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[] = "input.txt";
    char pattern[100], line[256];

    printf("Enter the pattern to search: ");
    scanf("%s", pattern);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nMatching lines:\n");
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern)) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
