//c program to check armstrong number
#include<stdio.h>
#include<math.h>

void main(){
    int n,temp,sum= 0,digit = 0,remainder;
    printf("enter a number:");
    scanf("%d",&n);

    temp = n;
    while(temp!= 0){
        digit ++;
        temp/=10;
    }

    temp = n;
    while(temp != 0){
        remainder = temp % 10;
        sum += pow(remainder,digit);
        temp/= 10;
    }
    if(sum == sum )
        printf("armstrong number");
        else
        printf("not a armstrong number");
    

}