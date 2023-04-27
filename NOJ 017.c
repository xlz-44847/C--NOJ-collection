#include <stdio.h>
#include <math.h>

int sushu(int a)
{
    int i =0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
    if(a%i == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int i = 0;
    int cnt = 0;
    int sum = 0;
    int flag = 1;
    for(i=800;i>=500;i--)
    {

        if(sushu(i))
            {
                sum += flag*i;
                flag = -flag;
                cnt++;
            }
    }
    printf("%d %d",cnt,sum);
    return 0;
}
