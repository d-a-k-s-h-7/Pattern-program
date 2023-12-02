#include<stdio.h>
int main()
{
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
          if(i%2!=0){
            if(j==n+2) printf("%d",i+1);
            else printf("%d",i);
          }
          else{
            if(j==1) printf("%d",i+1);
            else printf("%d",i);
          }
        }
        printf("\n");
    }

 }