//c program to reverse anumber


#include<stdio.h>
void main(){
    int num,rev=0,digit;

    printf("enter a number:");
    scanf("%d",&num);

    while(num>0){
        digit = num % 10;
        rev = num * 10 +digit;
        num = num/10;

    }
    printf("reversed number is :%d\n",rev);

}