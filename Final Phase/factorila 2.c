
#include <stdio.h>
long Fact (int n)
{
    if (n==0 || n==1)
     return n;
       return (long) n*Fact(n-1);
}
int main()
{
    int n;
    printf ("Enter the value of n:");
    scanf("%d",&n);
    printf("%d!=%d",n,Fact(n));
}
