// cprogram to generate a multiplication table

#include<stdio.h>
void main(){
    int n;
    printf("enter a number :\n");
    scanf("%d",&n);

    for(int i =1;i<=10;i++){
        printf("%d\n",n*i);
    }
    
}

