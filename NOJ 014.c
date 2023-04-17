#include<stdio.h>

int main()
{
    int n,i,mul,j,k;
    scanf("%d",&n);
    mul = n*n*n;
    i = 1;
    for(i = 1;n*n*n != n*i + n*n - n;i +=2)
    {
        ;
    }
    printf("%d*%d*%d=%d=%d",n,n,n,mul,i);
    k = i+2;
    for (j = 1;j<n;j++,k +=2)
        {
         printf("+%d",k);
        }
    return 0;
}
