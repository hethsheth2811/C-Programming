#include <stdio.h>
int main()
{
    /*Program to print 1st N Odd Nos*/
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The first N Odd Nos. are:");
    for(int i=1;i<=n;i++){
        printf("%d ",2*i-1);
    }

    return 0;
}
