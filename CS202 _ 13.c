#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*Program to convert bytes into KB, MB and GB*/
    float bytes,kb,mb,gb;
    printf("enter the value of bytes:");
    scanf("%f", &bytes);
    printf("Bytes into GB:%f\n",gb = bytes / (1024 * 1024 * 1024));
    printf("Bytes into MB:%f\n", mb = bytes / (1024 * 1024));
    printf("Byes into KB:%f\n",kb= bytes / 2024);

    return 0;
}
