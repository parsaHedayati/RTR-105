#include <stdio.h>
#include <math.h>
double main(){ 
   double x, y;

  printf("Dear user,This program will show the value of Arcsin(x) using Taylor series method\n" );
   printf("Please enter the Value in Radinas\nx= ");
   scanf("%lf", &x);
   if(x > 1)
   {
       printf("please consider that the range for this function is |x|<1\n");
       return main();
   }
    if(x < -1)
   {
       printf("please consider that the range for this function is |x|<1\n");
       return main();
   }
   y = asin(x);
   printf("asin(%lf) = %lf radians\n", x, y);
   printf("Now the results that will be shown from now, \nwill calculate asin(x) by taylor series method\n");
    int n = 0;
    double s,a;
    printf("x = %lf\n",x);
    a = (1 / (pow(4,n) * 1 * ( 2 * n + 1))) * pow(x,2 * n + 1);
    s = a;
    while(n < 501)
    {
        n++;
       a = a * (((4 * n * n) - (4 * n) + 1) * pow(x,2)) / (4 * pow(n,2) + (2 * n)) ; 
    s = s + a;
    
        if(n==499)
        printf("a499 =%10.7le   s499=%lf\n",a,s);
                if(n==500)
        printf("a500 =%10.7le   s500=%lf\n",a,s);
    }
     printf("x=%lf\tSum of the Taylor series function \ntill the 500th element is \nS= %lf\n",x,s);

    printf("\t\t___");
    printf("\n\t\t\\");
    printf("\n\t\t \\         (2n)!       2n+1");
    printf("\nasin(%lf)     =>  --------------* x",x);
    printf("\n\t\t /      n      2\n");
    printf("                       4 * (n!)*(2n+1)");
     printf("\n\t\t/___\n");
     printf("\t\tn=0\n");
     printf("\n\n");
     printf("\t\t\t  2        2\n");
     printf("\t\t\t(4n-4n+1)(x)\n");
     printf("Recurrence factor:      -------------\n");
     printf("\t\t\t        2\n");
     printf("\t\t\t     4(n)+2n");
    return s;}
