#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to find out net sales*/
    float net_sales, gross_sales, discount;
    printf("Enter the Gross Sales:");
    scanf("%f", &gross_sales);
    if(gross_sales>20000){
        discount=0.15*gross_sales;
    }
    else if (gross_sales>10000){
        discount=0.1*gross_sales;
    }
    else{
        discount=0.05*gross_sales;
    }
    net_sales=gross_sales-discount;
    printf("The net sales is:%f\n",net_sales);

    return 0;
}
