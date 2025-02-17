//average of all element present in an array calculate
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n; 

    printf("Average of array elements: %.2f\n", average);
    return 0;
}
