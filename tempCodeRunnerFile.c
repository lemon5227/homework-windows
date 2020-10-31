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
        }
        
    }
    for ( j = 1; j <= x*y; j++)
    {
        if((j%x)==0 && (j%y)== 0)
        printf("%d",j);
    }
    return 0;
    
}