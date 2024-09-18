#include <stdio.h>
int F(int m, int n)
{
    if (m==0 || (m>=n&& n>=1))
        return 1;
          return F(m-1,n)+F(m-1,n-1); 
}
int main()
{
    int m, n;
    printf("Enter the value of m:");
    scanf("%d",&m);
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The value is =%d",F(m,n));
    return 0;
}