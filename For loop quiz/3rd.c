#include<stdio.h>
int main()
{
   /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
  int i,row,col,n=10;
  printf("Enter the value of  n :");
  scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d\t",col);
        }
        printf("\n");
    }

  return 0;
}
