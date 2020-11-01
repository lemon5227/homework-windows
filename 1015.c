//水仙花数
#include<stdio.h>
int main(){
    int a,b,c;
    int i,j;
    int t;
    for ( i = 100; i <=999; i++)
    {
        t=i;
        a=t%10;
        t/=10;
        b=t%10;
        t/=10;
        c=t%10;
        if(i==(a*a*a+b*b*b+c*c*c))
        printf("%d\n",i);
    }
    
return 0;
}