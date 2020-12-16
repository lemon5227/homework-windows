//辗转相减法
    #include <stdio.h>

    int main (void)

    {

        int x,y,m,n;

        scanf("%d%d",&x,&y);

        m = x;

        n = y;

        while(y!=x)

    {

        if(x>y)

        {

            x = x-y;

        }

        if(y>x)

        {

            y = y-x;

        }

    }

    printf("%d %d",x,m*n/x);

    return 0;

    } 