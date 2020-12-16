//11.9c语言作业第八题
#include<stdio.h>
int main(){
    int i;
    int t=1;
    double sum=1;
    for(i=1;i<=10;i++){      
        t*=i;
        if(i%2==0){
            t=-t;
            sum+=1.0/t;

        }
        
    }
    printf("%f",sum);
    return 0;
}