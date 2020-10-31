//两个整数的最大公约数和最小公倍数
#include<stdio.h>
int main(){
    int x,y;
    int max,min;
    int t;
    int i,j;
    scanf("%d %d",&x,&y);
    if(x>y)
    t=y;
    else
    t=x;    
    for(i=1;i<=t;i++){
        if ((x%i)==0 && (y%i)==0)
        {
            printf("%d ",i);
            break;
        }
        
    }
    for ( j = 1; j <= x*y; j++)
    {
        if((j%x)==0 && (j%y)== 0){
        printf("%d",j);
        break;
        }
    }
    return 0;
    
}