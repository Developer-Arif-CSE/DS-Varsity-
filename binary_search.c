#include <stdio.h>
int main()
{
    
    int i, n, it, beg,end,mid, a[100];

    printf("\n Enter The Range Of The Array:");
    scanf("%d", &n);

    printf("\n Enter The Elements Of The Array:");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    printf("\nAfter Traversing:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }

    printf("\n Enter the element to search:");
    scanf("%d",&it);
    beg=0; 
    end=n-1;
    mid=((beg+end)/2);
    while (beg <= end)
    {
      if(it < a[mid])
      end=mid-1;
      else if(it == a[mid])
      {
        printf("\n %d found at %d location",it,mid);
        break;
      }
      else 
      beg = mid+1;
      mid = ((beg=end)/2);
    }
    if(beg > end)
    printf("\n item is not found");
    return 0;
}