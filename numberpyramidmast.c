#include<stdio.h>
int main ()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int b=i;
        for(int j=1;j<=n-i;j++){
             printf(" ");
        }
       for(int k=1;k<=i;k++){
        printf("%d",k);
       }
       for(int l=1;l<=i-1;l++){
        printf("%d",b-1);
        b=b-1;
       }
        printf("\n");
}
return 0;
}