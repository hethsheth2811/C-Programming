#include <stdio.h>
int main()
{
    /*Program to calculate the total and average marks of three subjects*/
   float sub_1,sub_2,sub_3,total,average;
    printf("Enter the marks of subject 1(out of 100):");
    scanf("%f",&sub_1);
    printf("Enter the marks of subject 2(out of 100):");
    scanf("%f",&sub_2);
    printf("Enter the marks of subject 3(out of 100):");
    scanf("%f",&sub_3);
    total=sub_1+sub_2+sub_3;
    printf("The total marks obtained are:%f\n",total);
    average=(sub_1+sub_2+sub_3)/3;
    printf("The average marks obtained are:%f\n",average);
    if(sub_1||sub_2||sub_3<35){
        printf("Fail");
    }
    else if(average>=70){
        printf("Grade:distinction");
    }
    else if(average>=60){
        printf("Grade:first class");
    }
    else if (average>=50){
        printf("Grade:second class");
    }
    else if (average>=35){
        printf("Grade:third class");
    }
    else
       {printf("Grade:fail");}


    return 0;
}



