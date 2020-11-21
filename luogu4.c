#include<stdio.h>
int main(){
    int a[100000]={0};
    int n;
    long i,j,k,m,q;
    int sum=0;
    int b[100]={0};
    scanf("%d",&n);
    int t;
    int ct=0;
    if(n>=3 && n<=1000000)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(j=0;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(a[j]>a[k]){
                    t=a[k];
                    a[k]=a[j];
                    a[j]=t;
                    }
                }
            }
        for(m=2;m<n;m++){
            sum=0;
            for(q=1;q<m;q++)
            sum+=a[q];
        printf("%.2f\n",(double)sum/(q-1));
        }
    }
    return 0;
}