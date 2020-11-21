//11.16C语言作业第七题，对数组重排序并在插入一个数字不改变数字长度
#include<stdio.h>
int main(){
	int i,j,k;
	int ct=0;
	int n1[5];
	int a;
	int n[5]={9,5,6,4,1,};
	int bottom[10]={0};
	scanf("%d",&a);
	int t;
	t=a;
	for(i=0;i<5;i++){
		bottom[n[i]]=1;
	}
	for(j=0;j<10;j++){
		if(bottom[j]>0){
		n1[ct]=j;
		ct++;
		}
	}
    n1[4]=n1[3];
    n1[3]=n1[2];
    n1[2]=n1[1];
    n1[1]=t;
	for(k=0;k<5;k++){
		printf("%d",n1[k]);
	}
	return 0;
}