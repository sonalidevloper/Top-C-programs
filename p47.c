//hollow star pyramid in a diamond shape
#include<stdio.h>
int main(){
    int n = 5;
    //upper half keliye
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<= 5-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=(2*i-1);j++){
            if(j == 1 || j == (2*i-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    // for lower half
    for(int i = 5-1;i>=1;i--){
        for(int j = 1;j<= 5-i;j++){
            printf(" ");
        }
        for(int j = 1; j<=(2*i-1);j++){
            if(j == 1 || j == (2*i-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}