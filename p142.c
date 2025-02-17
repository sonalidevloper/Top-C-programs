//read content from one file and write it into another file 
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

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Content copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
