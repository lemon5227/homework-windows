#include<stdio.h>
int main(){
    int m=2,n;
    int i;
    int sum=0;
    int num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=sum+m;
        sum*=10;
        num+=sum;
    }
    printf("%d",num/10);
    return 0;
}