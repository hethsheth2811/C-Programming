#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to convert Fahrenheit into celsius*/
    float celsius, fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("%f\n",fahrenheit=(celsius*1.8)+32);
    return 0;
}
