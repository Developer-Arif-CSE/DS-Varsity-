#include <stdio.h>
int main()
{
    int r,c,i,j,a[10][10];
    printf("\nEnter the range of the row:");
    scanf("%d",& r);
    printf("\nEnter the range of the column:");
    scanf("%d",& c);
    printf("\nEnter the element of the array:\n");
    for (i=0; i<r; i++)
       for (j=0; j<c; j++)
         scanf("%d",& a[i][j]);
         printf("After traversing:\n");
    for (i=0; i<r; i++)
    {
       for (j=0; j<c; j++)
        printf("%d ",a[i] [j]);
        printf("\n");
     
    }
        
    return 0;
}