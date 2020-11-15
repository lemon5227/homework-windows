#include<stdio.h>
int main(){
    int chang;
    int i,j,k,n;
    scanf("%d",&chang);
    char  ch[chang][3];
    for(n=0;n<chang;n++){
        for(i=0;i<3;i++){
            ch[chang][i]=getchar();
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for ( k=j+1;k<3;k++)
            {
                if(ch[chang][j]>ch[chang][k]){
                    char temp;
                    temp=ch[chang][j];
                    ch[chang][j]=ch[chang][k];
                    ch[chang][k]=temp;
                }

            }
            
        }
    }
    for(n=0;n<chang;n++){
        for(j=0;j<3;j++){
            printf("\n");
            printf("%c ",ch[chang][j]);
        }
        printf("\n");
    }

return 0;

}