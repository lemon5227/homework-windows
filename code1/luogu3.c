#include<stdio.h>
#include <math.h>
int main(){
    char input;
    int n1;
    double x;
    long g=pow(2,10);
    long k=pow(2,20);
    long b=pow(2,30);
    scanf("%dMB=?%c",&n1,&input);
    switch (input)
    {
    case 'G':
        x=(double)n1/g;
        printf("%.6f",x);
        break;
    case 'K':
        x=(double)n1*g;
        printf("%.6f",x);
        break;
    case 'B':
        x=(double)n1*k;
        printf("%.6f",x);
        break;
    default:
        break;
    }
    return 0;
}