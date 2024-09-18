#include <stdio.h>
 void ToH(int n, char beg,char aux, char end)
 {
    if (n==1)
      {
        printf("\n Disk 1 more from %c to %c",beg,end);
        return ;
      }
        ToH(n-1,beg,end,aux);
          {
            printf("\n %d Disk more from %c to %c",n,beg,end);
            ToH(n-1,aux, beg,end);
          }
 }
 int main()
 {
    int n;
    printf("\n Enter the disk number:");
    scanf("%d",&n);
    ToH(n, 'A','B','C');
    return 0;
 }