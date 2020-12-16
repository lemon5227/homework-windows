//11.9c语言作业第七题
#include<stdio.h>
int main(){
    int i;
    double sum=1;
    int t;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        t=1;
        t=i*(i+2);
        sum*=(1+1.0/t);
    }
    printf("%f",sum);
    return 0;
}