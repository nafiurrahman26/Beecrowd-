/*
The input file contains two values: one integer value X
 representing the total distance (in Km) and the second
 one is a floating point number Y  representing the spent
  fuel total, with a digit after the decimal point.

Output
*/

#include<stdio.h>
int main()
{
    int X ;
    float Y,consumption;

    scanf("%d",&X);
    scanf("%f",&Y);
     consumption = (X/Y);
    printf("%.3f km/l\n", consumption);
    return 0;


}
