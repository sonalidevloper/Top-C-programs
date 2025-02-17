//c program to claculate the sum of n natural numbers

#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        sum = sum +i; 
    }
    printf("total sum is:%d",sum);
}