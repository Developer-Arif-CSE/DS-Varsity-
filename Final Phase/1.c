#include <stdio.h>
int H(int n)
{
    if (n<5)
        return 3*n;
          return 2*H(n-5)+7; 
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The value is =%d",H(n));
    return 0;
}