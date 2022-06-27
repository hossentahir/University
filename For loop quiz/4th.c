#include<stdio.h>
int main()
{
   /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
  int n,i,fact=1;
  printf("Enter the value of n \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    fact*=i;
  }
  printf("The factorial of %d is %d ",n,fact);
  return 0;
}