//求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
#include<stdio.h>
int main(){
    int a,b,c;
    int sum1=0,sum2=0;
    double sum3=0;
    int m;
    double n;
    int i;
    scanf("%d %d %d",&a,&b,&c);
    for ( i = 1; i <=a; i++)
    {
        sum1+=i;
        
    }
    for ( i = 1; i <=b; i++)
    {
        m=i*i;
        sum2+=m;
    }
    for ( i = 1; i <=c; i++)
    {
        n=1.0/i;
        sum3+=n;
    }
    
    printf("%.2f",sum1+sum2+sum3);
    return 0;
}