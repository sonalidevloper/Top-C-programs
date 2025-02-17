//c program for area and perimeter of a rectangle

#include<stdio.h>
int main(){

    int length,width,area,perimeter;

    printf("enter length of the rectangle:");
    scanf("%d",&length);

    printf("enter width of the rectangle:");
    scanf("%d",&width);

    area = length * width;
    perimeter =2 * (length + width);

    printf("area of the rectangle is: %d\n",area);
    printf("perimeter of the rectangle is :%d\n",perimeter);


    return 0;
}