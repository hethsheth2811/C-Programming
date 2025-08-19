#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to calculate area and perimeter of square*/
    float side;
    printf("Enter side: ");
    scanf("%f", &side);
    printf("Area of square:%f\n",side*side);
    printf("Perimeter of square:%f\n",4*side);

    return 0;
}
