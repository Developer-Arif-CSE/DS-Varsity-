#include <stdio.h>
int main()
{
    int i,n,a[100];
    printf("Enter the Range of the array:\n ");
    scanf("%d",&n);
    printf("\n Enter the Element of the array:\n ");
    for (i=0; i<=n; i++)
       {
        scanf("%d",& a[i]);
       }
    printf("\n After traversing:");
    for (i=0; i<=n; i++)
       {
        printf("%d", a[i]);
       }
    return 0;
}