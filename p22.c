// c program to check leap year
#include<stdio.h>
void main(){
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if(year % 4 == 0 ){
        printf("the year is leap year");
    }else if(year % 100 == 0){
        printf("the year is not a leap year");
    }else if(year % 400 == 0){
        printf("this is a leap year");
    }else{
        printf("not a leap year");
    }
}
