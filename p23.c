// c program to check factorial number

#include<stdio.h>
void main(){
    int n,fact=1;
    printf("enter a number:");
    scanf("%d",&n);

    if(n == 0){
        printf("factorial is 1\n");
    }

    for(int i =1;i<=n;i++){
        fact = fact * i;
    }
    printf("factorial is :%d\n",fact);
}