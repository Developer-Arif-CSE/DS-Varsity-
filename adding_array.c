#include <stdio.h>
int main()
{
    int r,c,i,j,m,n,a[10][10],b[10][10],d[10][10];
    printf("\nEnter the range of the row1:");
    scanf("%d",& r);
    printf("\nEnter the range of the column1:");
    scanf("%d",& c);
    printf("\nEnter the element of the array1:\n");
    for (i=0; i<r; i++)
       for (j=0; j<c; j++)
         scanf("%d",& a[i][j]);
         printf("After traversing1:\n");
    for (i=0; i<r; i++)
    {
       for (j=0; j<c; j++)
        printf("%d ",a[i] [j]);
        printf("\n");
     
    }
    printf("\nEnter the range of the row2:");
    scanf("%d",& m);
    printf("\nEnter the range of the column2:");
    scanf("%d",& n);
    printf("\nEnter the element of the array2:\n");
    for (i=0; i<m; i++)
       for (j=0; j<n; j++)
         scanf("%d",& b[i][j]);
         printf("After traversing2:\n");
    for (i=0; i<m; i++)
    {
       for (j=0; j<n; j++)
        printf("%d ",b[i] [j]);
        printf("\n");
    }
    if ((r==m) && (c==n))
    {
        for (i=0; i<r; i++)
        for (j=0; j<c; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
        printf("\n After addition:\n");
        for (i=0;  i<r; i++)
        {
            for (j=0; j<c; j++)
            printf("%d ",& d[i][j]);
            printf("\n");
        }
    }
    else 
    printf("Addition is not possible.");
    return 0;
}