#include<stdio.h>
int main(){

    int n,row,col,pri=1;
    printf("Enter the value of  n :");
    scanf("%d",&n);

    for(row=1;row<=n; row++){

        for(col=1;col<=row;col++){

            printf("*");
        }

        printf("\n");
    }

    return 0;
}
