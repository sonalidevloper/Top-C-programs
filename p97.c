//sort a string 
#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[] = "programming";

    sortString(str);

    printf("Sorted string: %s\n", str);

    return 0;
}
