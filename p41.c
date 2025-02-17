//inverted pyramid
#include<stdio.h>
int main(){
    int n = 5;
    for(int i =5;i>=1;i--){
        //for spaces
        for(int j = 1;j<= 5-i;j++){
            printf(" ");

        }
        for(int j = 1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}