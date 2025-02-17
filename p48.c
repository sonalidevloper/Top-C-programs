//full diamond shape pyramid
#include<stdio.h>
int main(){
    int n = 5;
    //for upper half
    for(int i = 1; i<=5;i++){
        for(int j = 1;j<=5-i;j++){
            printf(" ");
        }
        for(int j = 1; j <=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    //for lower half
    for(int i = 5; i>=1;i--){
        for(int j = 1;j<=5-i;j++){
            printf(" ");
        }
        for(int j = 1; j <=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}