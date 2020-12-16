//统计字符数
#include<stdio.h>
int main(){
    char ch;
    int ct1=0,ct2=0,ct3=0,ct4=0;
    while ((ch=getchar())!='\n')
    {
        if(ch>='a' && ch<='z')
        ct1++;
        else if ((ch>='1' && ch<='9'))
        ct2++;
        else if(ch==' ')
        ct3++;
        else
        ct4++;

    }
    printf("%d %d %d %d",ct1,ct2,ct3,ct4);

    return 0;
}