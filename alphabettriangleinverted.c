#include<stdio.h>
int main ()
{
    int n;
    printf("enter number of rows ");
    scanf("%d",&n);
    int b=n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=b;j++){
            int d=a+64;
            char ch=(char)d;
            printf(" %c ",ch);
            a++;
             }
             b--;
        printf("\n");
    }
    return 0;

}