//rename a file
#include <stdio.h>

int main() {
    char oldName[] = "oldfile.txt";
    char newName[] = "newfile.txt";

    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming file.\n");
    }

    return 0;
}
