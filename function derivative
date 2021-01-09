#include <stdio.h>
#include<math.h>
void table();
void main()
{
   double a,b,delta_x,x,y;
    printf("Please enter the start value:");//start point
    scanf("%lf",&a);
    printf("Please enter the final value:");//final point
    scanf("%lf",&b);
    printf("please enter the precision valuse:");//precision value
    scanf("%lf",&delta_x);
    FILE *fptr;
    table();
     fptr = fopen("derivative.dat","a+");
    x = a;
   while(x < b){
    fprintf(fptr,"     %f",x);
    fprintf(fptr,"  %lf",asin(x));//value of for(x)
    fprintf(fptr,"      %lf",(1 / sqrt(1 - (x *x))));//analytical value for asin(x)'= 1 / sqrt(1- x * x)
    fprintf(fptr,"      %lf",(asin(x + delta_x) - asin(x)) / delta_x);//forward diffrence for asin(x)
    fprintf(fptr,"      %lf",x /pow(1 - (x * x),1.5));//analytical value for arcsin(x)''= (x/((1-x^2)^(3/2))
    fprintf(fptr,"   %lf\n",(asin(x) - (2 * asin(x + delta_x)) + asin(x + 2 *delta_x)) / pow(delta_x,2));//forward diffrence 
   x = x + delta_x;
    }
   
  
}
void table()
{
FILE *fptr;
fptr = fopen("derivative.dat","w+");
fprintf(fptr,"  __________________________________________________________________________________\n");
fprintf(fptr,"   ||  x     ||  f(x)    ||    f'(x)     ||    f'(x)   ||   f''(x)     ||  f''(x)  ||\n");
fprintf(fptr,"   ||        ||          ||              ||            ||              ||          ||\n ");
fprintf(fptr,"  ||        ||  asin(x) ||   analtical  ||   forward  ||   analtical  ||  forward ||\n ");
fprintf(fptr,"  ||        ||          ||    formula   ||  diffrence ||    formula   || diffrence||\n");
fprintf(fptr,"   ||________||__________||______________||____________||______________||__________||\n");

    
}
