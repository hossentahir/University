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
  while(n!=0){
    div=n/10;
    rem=n%10;
     
    sum+=rem;
    n=div;
    
  }
  printf("The sum of the number's digit is %d",sum);
  
   

  return 0;
}