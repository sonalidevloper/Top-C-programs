//write a program to find the sum of two number usinig user input

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter a number:");
    
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);

    int sum = a+b;
    printf("sum of two number is :%d",sum);
    return 0;
}