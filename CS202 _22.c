#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to calculate net sales*/
    float net_sales,gross_sales,discount;
    printf("Enter the gross sales: ");
    scanf("%f", &gross_sales);
    discount = gross_sales * 0.10;
    net_sales = gross_sales - discount;
    printf("Net Sales: %f\n", net_sales);

    return 0;
}
