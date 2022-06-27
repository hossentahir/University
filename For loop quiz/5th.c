#include<stdio.h>
int main()
{
   /*-------------------
    Sazzad Hossen,SEC: E, 221-35-840
    --------------------
   */
  int n,rem,new,arm=0,div ;
  printf("Enter a number : \n");
  scanf("%d",&n);
  new=n;
  while(n!=0){
    div=n/10;
    rem=n%10;
     
    arm=arm+rem*rem*rem;
    n=div;
    
  }
  
  if(arm==new)
    printf("This is a armstrong number ");
    else
    printf("This is not a armstrong number");

  return 0;
}