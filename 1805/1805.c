// #include<stdio.h>
// int main()
// {
//     int a,b,i;
//     long int count=0;
//     scanf("%d%d",&a,&b);
//     for(i=a;i<=b;i++)
//     {
//         count=(long int)(count+i);
//     }
//  printf("%ld\n",count);
//  return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, b, i;
//     long int soma=0;

//     scanf("%d", &a);
//     scanf("%d", &b);    

//     for(i = a; i <= b; i++)
//     {
//     soma =(long int)(soma + i);
//     }
//     printf("%ld\n", soma);
// }
#include<stdio.h>
int main()
{
   long long int a,b,n,s;

    scanf("%lld %lld",&a,&b);

         n=(b-a)+1;
         s=((float)n/2)*(2*a+(n-1));
         printf("%lld\n",s);


    return 0;
}