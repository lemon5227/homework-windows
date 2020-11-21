//11.16C语言作业第八题折半查找实现
#include<stdio.h>
int search(int num[],int x,int y);
int main(){
    int a[10]={9,72,214,1000,235,165,366,58,403,534};
    int bottom[1001]={0};
    int i,j,k;
    int ct=0;
    int b[10];
    int n;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        bottom[a[i]]=1;
    }
    for(j=0;j<1001;j++){
        if(bottom[j]==1){
            b[ct]=j;
            ct++;
        }

    }
    for(k=0;k<ct;k++)
        printf("%d\n",b[k]);
    search(b,10,n);
    return 0;
}
int search(int num[],int x,int y){
    int low=0,hight=x-1,mid;
    while(low<=hight){
    mid=(low+hight)/2;
    if(num[mid]==y)
        printf("find it\n");
    if(y>num[mid])
        low=mid+1;
    else
        hight=mid-1; 
    }
    return 0;
}