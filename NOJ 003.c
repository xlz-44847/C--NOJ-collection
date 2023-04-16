#include<stdio.h>

float Sum(float num1,float num2,float num3)
{
    float num4 = num1 + num2 + num3;
    return num4;
}
float Ave(float num1,float num2,float num3)
{
    float num4 = (num1 + num2 + num3)/3;
    return num4;
}

int main()
{
    float m,e,c,sum,ave;
    scanf("%f%f%f",&m,&e,&c);
    sum = Sum(m,e,c);
    ave = Ave(m,e,c);
    printf("%.6f\n%.6f\n",sum,ave);
    return 0;
}
