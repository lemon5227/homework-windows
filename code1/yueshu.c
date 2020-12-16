//两个整数的最大公约数和最小公倍数
#include<stdio.h>
int gcd(int m,int n);
int main(){
    int x,y;
    int t;
    int i,j;
    scanf("%d %d",&x,&y);
    printf("%d ",gcd(x,y));

    for ( j = 1; j <= x*y; j++)
    {
        if((j%x)==0 && (j%y)== 0){
        printf("%d",j);
        break;
        }
    }
    return 0;
    
}
int gcd(int m,int n){
    if(n==0)
    return m;
    int r= m % n;
    return gcd(n,r);
}