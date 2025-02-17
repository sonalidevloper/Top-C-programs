//Write a Program to Swap two numbers

#include<stdio.h>
int main(){

    int a= 10;
    int b= 11;
    int swap;
    swap = a;
    a=b;
    b = swap;
    printf("a =%d,b = %d",a,b);
    return 0;
}