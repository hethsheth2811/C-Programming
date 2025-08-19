#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to calculate simple interest*/
    float principal, rate, time, simple_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    printf("Simple interest is :%f\n", simple_interest = (principal * rate * time) / 100);
    return 0;
}
