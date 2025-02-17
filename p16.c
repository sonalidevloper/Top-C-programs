//1 C PROGRAM to check whether a program is positive ,negative or zero
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(n>0){
        printf("positive number");
    }else if(n=0){
        printf("zero");
    }else{
        printf("negative number");
    }
    return 0;
    
}