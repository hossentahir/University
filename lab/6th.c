#include<stdio.h>
int main(){
    int i,n,sum=0;

    printf("Enter a natural number :");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2){
        printf("%d\t",i );
        sum+=i;
    }
    printf(" \nThe sum of all even number %d",sum);

    return 0;
}
