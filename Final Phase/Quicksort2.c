
#include<stdio.h>
void quicksort(int a[100],int b,int e)
{
   int i, j, v, temp;

   if(b<e){
      v=b;
      i=b;
      j=e;

      while(i<j)
        {
         while(a[i]<=a[v]&&i<e)
            i++;
         while(a[j]>a[v])
            j--;
         if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[v];
      a[v]=a[j];
      a[j]=temp;
      quicksort(a,b,j-1);
      quicksort(a,j+1,e);

   }
}

int main()
{
   int i, n, a[25];

   printf("enter the range of array : ");
   scanf("%d",&n);

  printf("enter the element of array : ");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   quicksort(a,0,n-1);

   printf(" After sorting: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}

