#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z = ((x*3.5+y*7.5)/(3.5+7.5));
    printf("MEDIA = %.5f\n",z);
    return 0;
}
