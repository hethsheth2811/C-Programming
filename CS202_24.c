#include <stdio.h>
int main()
{
    /*Program to swap two values*/
    int first, second, x;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    x = first;
    first = second;
    second = x;
    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d\n", second);

    return 0;
}

