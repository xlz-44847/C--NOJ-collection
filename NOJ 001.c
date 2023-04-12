#include<stdio.h>

int Add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = Add(a,b);
    printf("%d\n",c);
    return 0;
}
