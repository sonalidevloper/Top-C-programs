//c program to find LCM of two numbers

#include<stdio.h>
void main(){
    int a,b,max;

    printf("enter two number :");
    scanf("%d %d",&a,&b);

    //check the maximum number
    max = (a>b) ? a:b;

    while(1){
        if(max % a == 0 && max % b ==0){
            printf("the LCM of %d and %d is:%d",a,b,max);
            break;

        } 
    max++;
    }
}