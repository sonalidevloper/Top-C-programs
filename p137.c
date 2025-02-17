//make a file read only
#include <stdio.h>

int main() {
    char filename[] = "example.txt";

    if (chmod(filename, 0444) == 0) {
        printf("File is now read-only.\n");
    } else {
        printf("Error making file read-only.\n");
    }

    return 0;
}
