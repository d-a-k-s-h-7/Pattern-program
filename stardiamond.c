#include<stdio.h>
int main ()
{
    int n,a;
    printf("enetr n ");
    scanf("%d",&n);
    a=n/2+1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
       
        printf("\n");
    }
    int nst=n-2;
    int nsp=1;
    for(int p=n-2;p<=n;p++){
      for(int q=1;q<=nsp;q++){
            printf(" ");
        
        }
        nsp++;
        for(int r=1;r<=nst;r++){
            printf("*");
        }
        nst=nst-2;
        printf("\n");
       
    }
    // method 2.....


    // int n;
    // printf("enetr n ");
    // scanf("%d",&n);
   int nsp=n/2;
   int nst=1;
//    int a=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<a){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        
    }
    return 0;
}
    
