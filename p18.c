//3c program to check whether a character is violet or constant

#include<stdio.h>
void main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' ||
ch == 'I' || ch == 'O' || ch == 'U' ){
    printf("vowel");
}else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'V' ){
    printf("constant character");

}else{
    printf("invalid character");

}
}