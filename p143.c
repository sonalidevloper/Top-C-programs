//read an print all files from a zip file
#include <stdio.h>
#include <stdlib.h>
#include <miniz.h>

int main() {
    mz_zip_archive zip;
    memset(&zip, 0, sizeof(zip));

    const char *zip_filename = "sample.zip";

    if (!mz_zip_reader_init_file(&zip, zip_filename, 0)) {
        printf("Error opening ZIP file: %s\n", zip_filename);
        return 1;
    }

    int file_count = mz_zip_reader_get_num_files(&zip);
    printf("ZIP File: %s contains %d files:\n", zip_filename, file_count);

    for (int i = 0; i < file_count; i++) {
        char filename[256];
        mz_zip_reader_get_filename(&zip, i, filename, sizeof(filename));
        printf("%d. %s\n", i + 1, filename);
    }

    mz_zip_reader_end(&zip);
    return 0;
}
