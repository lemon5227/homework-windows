//11.16c语言作业第八题
//8.已知有数组：a[10]={9,72,214,1000,235,165,366,58,403,534}，
//从键盘输入一个数，判断该数是否在数组中，若在，输出其位置信息；不在，输出相应提示。
#include<stdio.h>
int main(){
    int a[10]={9,72,214,1000,235,165,366,58,403,534};
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(n==a[i])
        printf("yes it is %dth\n",i+1);
    }
    return 0;
}