//c program to find simple intrest

#include<stdio.h>
int main(){
    float principal,rate,time,simpleintrest;

    printf("enter principal amount:");
    scanf("%f",&principal);

    printf("enter rate of intrest:");
    scanf("%f",&rate);

    printf("enter time in year:");
    scanf("%f",&time);

    simpleintrest =(principal*rate*time)/100;

    printf("Total intrest is:%f",simpleintrest);

    return 0;
}