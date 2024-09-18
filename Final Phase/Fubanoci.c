#include <stdio.h>
long Fibo (int n)
{
    if (n==0)
     return 1;
      if (n==1)
     return 1;
       return (long) Fibo(n-1)+Fibo(n-2);
}
int main()
{
    int n;
    printf ("Enter the value of n:");
    scanf("%d",&n);
    printf("%d th Fibo is %d",n,Fibo(n));
}

