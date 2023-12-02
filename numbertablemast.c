#include<stdio.h>
int main ()
{
    int n ;
    printf("enter n ");
    scanf("%d",&n);
    int nsp=1;
    for(int i =1;i<=2*n-1;i++){
        if(i<=n)
        printf("%d",i);
        else
        printf("%d",2*n-i);
    }
    printf("\n");
    for(int j=1;j<=n-1;j++){
        int a=1;
        for(int k =1;k<=n-j;k++){
          printf("%d",a);
          a++;
    }
        for(int l =1;l<=nsp;l++){
        printf(" ");
    }
    for(int p=n-j;p>=1;p--){
        printf("%d",p);

    }
    nsp+=2;
    printf("\n");
    }
    return 0;
}
