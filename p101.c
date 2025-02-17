//lemove leading zeros
#include <stdio.h>

char* removeLeadingZeros(char str[]) {
    int i = 0;
    
    while (str[i] == '0') {
        i++;
    }
    
    return (str[i] == '\0') ? "0" : &str[i];
}

int main() {
    char str[] = "00012345";
    
    printf("String after removing leading zeros: %s\n", removeLeadingZeros(str));

    return 0;
}
