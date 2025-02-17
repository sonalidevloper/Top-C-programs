//c program to print 180 degree rotated simple pyramid
#include<stdio.h>
int main(){
    int n=5;
    for(int i =1;i<=5;i++){
        //for printing space
        for(int j = 1;j<=5-i;j++){
            printf(" ");
        }
        for(int j= 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}