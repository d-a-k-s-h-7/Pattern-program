#include<stdio.h>
int main ()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
    int min =0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(i>n){
                a=2*n-i;
            }
            int b=j;
             if(j>n){
                b=2*n-j;
            }
            if(a<b){
                min=a;
            }
            else{
                min=b;
            }
            int p=n+1-min;
            printf("%d",p);

        }
        printf("\n");
    }
    return 0;
}