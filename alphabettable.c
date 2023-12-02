#include<stdio.h>
int main ()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int nsp=1;
    for(int p=1;p<=2*n-1;p++){
        int b=p+64;
        char ch=(char)b;
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
        int d=a+64;
        char ch =(char)d;
        printf("%c",ch);
        a++;
    }
    for(int k=1;k<=nsp;k++){
        printf(" ");
        a++;
    }
    for(int l=1;l<=n-i;l++){
        int d=a+64;
        char ch =(char)d;
        printf("%c",ch);
        a++;
    }
    nsp+=2;
    printf("\n");
}

}