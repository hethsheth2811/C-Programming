#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to find whether the number is divisible by 7*/
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num%7==0)
    {
        printf("The number is divisible by 7.\n");
    }
    else
    {
        printf("The number is not divisible by 7.\n");
    }


    return 0;
}
