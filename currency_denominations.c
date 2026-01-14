#include<stdio.h>

int main ()
{
   int amt=0,n1000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
   printf("Enter an amount:\n");
   scanf("%d", &amt);
    n1000=amt/1000;
    n500=amt%1000/500;
    printf("N1000=%d, N500=%d", n1000,n500);
   return 0;
}
