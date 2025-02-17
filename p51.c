//reverse floyd triangle 
#include<stdio.h>
int main(){
    int n = 5,number;
    number = (n *(n +1))/2;// calculate total numbers 

    for(int i = 5;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%d ",number);
            number --;
        }
        printf("\n");
    }
    return 0 ;

}