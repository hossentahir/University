#include<stdio.h>
int main()
{
  /*-------------------
    comment area
    --------------------
   */
  int n=0,sum=0,count=0;
  float avg;
  while(n!=-1){
    printf("Enter the number(to stop -1) : ");
    scanf("%d",&n);
    sum=sum+n;
    count++;
  }
  printf("%d %d",sum,count);

  avg=(float)(sum+1)/(count-1);
  printf("the avg is %lf",avg);
  return 0;
}
//n=0 n=5 count=1
//n=5 n=-1 count=2