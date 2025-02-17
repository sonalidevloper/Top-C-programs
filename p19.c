// cprogram to find largest among three numbers

#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("first number is largest number ");
    } else if(b>a && b>c){
        printf("second number is largest");
    }else{
        printf("third number is largest");
    }


}
