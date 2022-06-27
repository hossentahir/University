#include<stdio.h>
int main()
{
  /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
  int i,n;
  printf("Enter the number of n : ");
  scanf("%d",&n);
   for(i=1;i<=n;i++){
    if((n%i)==0){
      printf("%d\t",i);
    }
   }

  return 0;
}
