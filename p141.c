//append the content of one text file to another
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen("destination.txt", "a");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Content appended successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
