//c program to print a fibonicci series

#include<stdio.h>
void main(){
    int n,a=0,b=1,next;

    printf("enter a number :");
    scanf("%d",&n);

    printf("%d %d",a,b);

    for(int i = 2;i<=n;i++){
        next = a+b;
        printf("%d ",next);
        a = b;
        b = next;
    }

}