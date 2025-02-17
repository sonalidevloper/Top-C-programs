//pascals triangle 
#include<stdio.h>
int factorial (int num ){
    int fact = 1;
    for(int i = 1;i<=num;i++){
        fact*= i;
    }
    return fact;
}
int main(){
    int n = 5;
    for(int i =0;i<5;i++){
        for(int j = 0;j<=5-i;j++){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            printf("%d ",factorial(i)/(factorial(j)*factorial(i-j)));
        }
        printf("\n");
    }

    return 0;
}