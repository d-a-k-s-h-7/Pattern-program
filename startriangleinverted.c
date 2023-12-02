#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter number of rows");
    scanf("%d",&n);
    printf("enter number of columns");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=m;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }


    //another method
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

    }