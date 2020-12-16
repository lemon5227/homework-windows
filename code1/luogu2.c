#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    int a,b;
    int i,j;
    for(i=1;i<84;i++){
        for(j=1;j<=i;j++){
            if(i+j>c && (i*i+j*j)==c*c ){
                printf("%d %d",j,i);
                break;
            }
        }
    }
    return 0;
}