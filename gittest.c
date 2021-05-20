#include <stdio.h>

int  function(int a ,int b ,int c)
{
    if (a >= b){
        if (a >= c)
            return a;
        else
            return c;
    }
    else if  (b >= c)
    {
        return  b;
    }
    else 
        return  c;
}
int main()
{
    int a, b, c;
    printf("输入三个整数");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",function(a,b,c));
    return  0;
}

