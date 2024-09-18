#include <stdio.h>
int main()
{
        int i, n, it, fo, a[100];

    printf("\nEnter The Range Of The Array:");
    scanf("%d", &n);

    printf("\nEnter The Elements Of The Array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    printf("\nAfter Traversing:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    printf("\n Enter the element to search:");
    scanf("%d",&it);
    fo=0;
    for (i =0; i<n; i++)
    if (a[i]==it)
    fo=1;
    if(fo==1)
    printf("\n Item is found");
    else
    printf("\n Item is not found");
    return 0;
}