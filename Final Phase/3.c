
#include <stdio.h>
int Q(int a, int b)
{
    if (a<b)
        return 0;
          return Q(a-b,b)+1;
}
int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The Output is =%d",Q(a,b));
    return 0;
}
