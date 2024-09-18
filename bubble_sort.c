#include <stdio.h>

int main() {
    int i, n,c, t, p, a[100];

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

    for ( p= n-1; p>0; p--)
       for( c=0; c<p; c++)
       if( a[c] < a[c+1] )
       {
        t = a[c];
        a[c] = a[c+1];
        a[c+1] = t;
       }

    printf("\nAfter sorting:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}
