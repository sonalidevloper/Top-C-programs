//inverted hollow star pyramid
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 5;i>=1;i--){
        //for spaces
        for(int j = 1;j<=5-i;j++){
            printf(" ");
        }
        for(int j = 1;j<=(2*i -1);j++){
            if(j == 1 || j ==(2*i-1) || i == 5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}