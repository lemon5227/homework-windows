//求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
#include<stdio.h>
int main(){
    int n;
    long long num=1;
    long long sum=0;
    int i;
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        num*=i;
        sum+=num;
    }
    printf("%lld",sum);
    return 0;
}