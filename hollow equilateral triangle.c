#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
        for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++) {
            printf(" ");
            }
        for(int j=0;j<2*i+1;j++){
            if(i<n-1){
                if(j==0 || j==2*i) printf("*");
                else printf(" ");
            }
             else{
                if((i+j)%2==0) printf("*");
                else printf(" ");
            }
            }
        printf("\n");
    }
    
    
    return 0;
}