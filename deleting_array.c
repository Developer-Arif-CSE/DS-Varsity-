#include <stdio.h>
int main() {
    int i, n, p, a[100];

    printf("\nEnter The Range Of The Array:");
    scanf("%d", &n);

    printf("\nEnter The Elements Of The Array:");
    for (i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
        }

    printf("\nAfter Traversing:");
    for (i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
        }

    printf("\nEnter The Position To delete:");
    scanf("%d", &p);

    if (p < 0 || p > n)
        {
        printf("\nDelete Is Impossible:\n");
        }
    else
     {
       for (i=p+1; i<n; i++)
        a[i-1]=a[i];
        n--;
     }

    printf("\nAfter Deleting:");
    for (i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
        }

    return 0;
}