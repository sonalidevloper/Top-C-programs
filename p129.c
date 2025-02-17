//add N distance  given in inch feet system using structure
#include <stdio.h>

typedef struct {
    int feet;
    int inches;
} Distance;

void addDistances(Distance d[], int n, Distance *result) {
    result->feet = 0;
    result->inches = 0;

    for (int i = 0; i < n; i++) {
        result->feet += d[i].feet;
        result->inches += d[i].inches;
        
        if (result->inches >= 12) {
            result->feet += result->inches / 12;
            result->inches %= 12;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of distances: ");
    scanf("%d", &n);

    Distance d[n], result;
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for distance %d:\n", i + 1);
        printf("Feet: ");
        scanf("%d", &d[i].feet);
        printf("Inches: ");
        scanf("%d", &d[i].inches);
    }

    addDistances(d, n, &result);

    printf("\nTotal Distance: %d feet %d inches\n", result.feet, result.inches);

    return 0;
}
