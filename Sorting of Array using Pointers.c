#include<stdio.h>
int main(){
    int x[10];
    void accept(int[]);
    void xsort(int[]);
    void print(int[]);
    accept(x);
    xsort(x);
    print(x);}
    void accept (int p[])
    {
        printf("Enter 5 values:");
        for (int i=0; i<5; i++)
            scanf("%d",&p[i]);
    }
    void xsort(int q[5])
    {
        int i,j,t;
        for(i=0;i<=3;i++)
            for(j=i+1;j<=4;j++)
            if(i[q]>q[j])
    {t=q[i];
     q[i]=q[j];
     q[j]=t;
    }
    }
    void print (int*r)
    {
        printf("\nValues are: ");
        for(int i=0;i<5;i++)
                    printf("%d ",r[i]);
    }

