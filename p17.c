//2 c program to check whether a number is eve or odd

#include<stdio.h>
void main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    if(n %2 == 0){
        printf("even number");
    }else{
        printf("odd number");
    }
}
