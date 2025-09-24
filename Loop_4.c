#include <stdio.h>
int main()
{
    /*Program to print 1st N Natural Nos*/
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The first N Natural Nos. are:");
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }

    return 0;
}
