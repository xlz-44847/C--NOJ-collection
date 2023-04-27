#include <stdio.h>

int main()
{
    int A1=1;
    int A2=1;
    int An=0;
    int sum0 = 2;
    int sum1 = 0;
    int i = 0;
    for(i=3;;i++)
    {
        An = A1 + 2*A2;
        sum1 =sum0 + An;
        if(sum0<100 && sum1>=100)
            printf("%d\n",i-1);
        if(sum0<1000 && sum1>=1000)
            printf("%d\n",i-1);
        if(sum0<10000 && sum1>=10000)
        {
            printf("%d\n",i-1);
            break;
        }
        A1 = A2;
        A2 = An;
        sum0 = sum1;
    }
    return 0;
}
