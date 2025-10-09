#include <stdio.h>
int A=1;
int main()
{
     void myProc(void);
     myProc();
     printf("A=%d\n",A);
 }
 void myProc()
 { int A=2;
 if(A==2)
 { A=3;
 printf("A=%d\n",A);
 }
}
