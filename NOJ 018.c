#include<stdio.h>

int main()
{
    double right,left;
    double ans=0;
    int i=0;
    double mid;
    scanf("%lf%lf",&left,&right);
    for(;;)
    {
        mid = (double)(right+left)/2;
        if((2*mid*mid*mid-4*mid*mid+3*mid-6) == 0)
            {
                printf("%.2lf",mid);
                break;
            }
        else
        {
            if((2*mid*mid*mid-4*mid*mid+3*mid-6) < 0)
                left = mid;
            else
                right = mid;
        }
    }
    return 0;
}
