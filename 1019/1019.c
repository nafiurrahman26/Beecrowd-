#include<stdio.h>
int main()
{
    int second;
    scanf("%d",&second);
    int hours = second/3600;
    second = second-(hours*3600);
    int minutes=second/60;
    second= second-(minutes*60);
    printf("%d:%d:%d\n",hours,minutes,second);
    return 0;

}
