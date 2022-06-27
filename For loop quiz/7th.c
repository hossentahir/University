#include<stdio.h>
int main()
{
   /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
  int n,rem,new,arm=0,div,sum=0 ;
  printf("Enter a number : \n");
  scanf("%d",&n);
  new=n;
  printf("The reverse of the number is : ");
  while(n!=0){
    div=n/10;
    rem=n%10;
     printf("%d\t",rem);
    n=div;
    
  }
   
   

  return 0;
}