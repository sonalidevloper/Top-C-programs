
//write a program to calculate compound intrest


#include <stdio.h>
#include <math.h>

int main() {

    double principal, rate, time, CI, totalamount;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter time: ");
    scanf("%lf", &time);

    totalamount = principal * pow((1 + rate / 100), time);
    CI = totalamount - principal;

    printf("Final amount: %2lf\n", totalamount);
    printf("Compound interest: %2lf\n", CI);

    return 0;
}