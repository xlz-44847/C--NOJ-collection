#include<stdio.h>

#define pi 3.1415926

int main()
{
    float r,h,l,s,sq,vq,vz;
    scanf("%f%f",&r,&h);
    l = 2*pi*r;
    s = pi*r*r;
    sq = 4*pi*r*r;
    vq = 4*pi*r*r*r/3;
    vz = pi*r*r*h;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",l,s,sq,vq,vz);
    return 0;
}
