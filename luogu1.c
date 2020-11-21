#include<stdio.h>
int main(){
    int n;
    int i,j,k;
    int t;
    int a[7];
    int ct=0;
    int sum=0;
    int num=0;
    for(i=18;i<50;i++){
        for(k=0;k<7;k++)
        a[k]=0;
        ct=0;  
        do
        {
            t=i;
            a[ct]=t%10;
            t/=10;
        } while (t!=0);
        
        for(j=0;j<ct;j++){
            sum+=a[j];
        }
        if(sum==9)
        num++;

    }
    printf("%d",num);
    return 0;
}