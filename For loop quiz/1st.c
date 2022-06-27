 /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
#include<stdio.h>
int main()
{
  int a[10],i,sum=0;
  printf("Enter the value of 10 numbers: \n");
  for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  printf("The sum of 10 numbers is %d and average of 10 numbers is %d",sum,sum/10);
  return 0;
}
