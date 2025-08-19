#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to calculate average of three subjects along with their total*/
    float subject_1,subject_2,subject_3;
    printf("enter marks of subject 1: ");
    scanf("%f", &subject_1);
    printf("enter marks of subject 2:" );
    scanf("%f", &subject_2);
    printf("enter marks of subject 3:" );
    scanf("%f", &subject_3);
    printf("The total marks obtained are:%f\n",subject_1+subject_2+subject_3);
    printf("The average marks obtained are:%f\n",(subject_1+subject_2+subject_3)/3);

    return 0;
}
