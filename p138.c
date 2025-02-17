//compare two files and report mismatches
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    int pos = 0, line = 1, mismatch = 0;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (((ch1 = fgetc(file1)) != EOF) && ((ch2 = fgetc(file2)) != EOF)) {
        pos++;
        if (ch1 == '\n') line++;
        if (ch1 != ch2) {
            printf("Mismatch at Line %d, Position %d: '%c' vs '%c'\n", line, pos, ch1, ch2);
            mismatch = 1;
        }
    }

    if (!mismatch)
        printf("Files are identical.\n");

    fclose(file1);
    fclose(file2);
    
    return 0;
}
