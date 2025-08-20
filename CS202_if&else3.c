#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to find out net salary*/
    int net_salary,gross_salary,allowances,deductions;
    printf("Enter Gross Salary:");
    scanf("%d", &gross_salary);
    if(gross_salary>10000){
     allowances=0.1*gross_salary;
     deductions=0.03*gross_salary;
    }
    else if (gross_salary>5000){
            allowances=0.07*gross_salary;
            deductions=0.02*gross_salary;}
    else{
        allowances=0;
        deductions=0;
    }
    net_salary = gross_salary + allowances - deductions;
    printf("The Net Salary is : %d\n",net_salary);


    return 0;
}
