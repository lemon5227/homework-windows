#include<stdio.h>
int main(){
    int num[]={0};
    int i,j,k,l;
    int n;
    int ct=0;
    int m=1;
    int sum=0;
    scanf("%d",&n);
    for ( i =5 ; i <=n; i++)
    {
        ct=0;
        for ( j = 1; j <i; j++)
        {
            if(i%j==0){
                num[ct]=j;
                ct++;
            }
             sum=0;
             for ( k = 0; k < ct; k++)
                sum+=num[k];
             if(i==sum){
             printf("%d its factors are",i);
             for(k=0;k<ct;k++){
                printf(" %d",num[k]);
                }
                printf("\n");
                break;
             }
        }

    }
    return 0;
}