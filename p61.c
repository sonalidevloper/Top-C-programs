//print 2D array
#include <stdio.h>

int main() {
    int arr[3][3] = {  {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };

    printf("2D Array Elements:\n");
    for(int i = 0; i < 3; i++) {  
        for(int j = 0; j < 3; j++) {  
            printf("%d ", arr[i][j]); 
        }
        printf("\n"); 
    }
    
    return 0;
}
