#include <stdio.h>
int main()
{
    /*Program to convert celsius into Fahrenheit*/
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("%f\n",fahrenheit=(celsius*1.8)+32);
    return 0;
}

