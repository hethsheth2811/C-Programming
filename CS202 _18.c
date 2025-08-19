#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to calculate area and perimeter of rectangle*/
    float length,breadth;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    printf("Area of rectangle :%f\n",length*breadth);
    printf("Perimeter of rectangle :%f\n",2*(length+breadth));

    return 0;
}
