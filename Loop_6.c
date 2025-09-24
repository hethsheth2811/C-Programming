#include <stdio.h>
int main()
{
    /*Program to print 1st N Even Nos*/
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The first N Even Nos. are:");
    for(int i=1;i<=n;i++){
        printf("%d ",2*i);
    }

    return 0;
}
