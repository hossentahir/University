 /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
#include<stdio.h>
int main()
{
  int i,n=5,sum=0;
  printf("Enter the value of n \n");
  scanf("%d",&n);
  for(i=1;i<=n;i+=2){
    printf("%d\t",i);
    sum+=i;
  }
  printf("\nThe sum is %d",sum);
  return 0;
}