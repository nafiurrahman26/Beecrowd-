/*
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000 */
#include<stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\n",(a*c)/2);
    printf("CIRCULO: %.3lf\n",c*c*3.14159);
    printf("TRAPEZIO: %.3lf\n",((a+b)/2)*c);
    printf("QUADRADO: %.3lf\n", b*b);
    printf("RETANGULO: %.3lf\n",a*b);
    return 0;


}
