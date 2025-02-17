//create a temporary file
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tempFile;
    char buffer[100];

    tempFile = tmpfile();
    if (tempFile == NULL) {
        printf("Failed to create temporary file!\n");
        return 1;
    }

    fprintf(tempFile, "Hello, this is a temporary file.\n");

    rewind(tempFile);

    fgets(buffer, sizeof(buffer), tempFile);
    printf("Data from temp file: %s", buffer);

    return 0;
}
