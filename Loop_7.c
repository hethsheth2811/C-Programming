#include <stdio.h>
int main()
{
    /*Program to print sum of 1st N Natural Nos*/
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The first N Natural Nos. are:");
    for(int i=1;i<=n;i++){
            sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}
