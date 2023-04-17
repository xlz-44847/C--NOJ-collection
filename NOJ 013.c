#include <stdio.h>

int main()
{
    int x,a,mul = 1;
    scanf("%d %d",&x,&a);
    for(int i = 0;i < a;i++)
    {
        if(mul > 1000)
        {
            mul %=1000;
        }
        mul *= x;
    }
    if(mul > 1000)
    {
        mul %=1000;
    }
    printf("%d",mul);
    return 0;
}
