#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double sum=0.0;
    double m=1.0;
    double n=1.0;
    int t=0;
    for (i=0;i<20;i++)
    {
        t = n;
        n = m;
        m = m+t;
        sum += m/n;
    }
    printf("%lf\n",sum);
    return 0;
}
