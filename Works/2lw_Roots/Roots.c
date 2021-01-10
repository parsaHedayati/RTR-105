#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,y1,y2,x;
    int n;
    printf("Hello,This program will get the root for\n y = asin(x)-c with the Bisection method\n with the precision of d  for the range of [a,b]\n");
    printf("please enter a , b , c and the precision d\n");
        printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    if(a > b){
        printf("please note that a should be smaller than b because [a,b],Please run the program again\n");
        return 0;
    }
    printf("c = ");
    scanf("%lf",&c);//c value
    printf("d = ");
    scanf("%lf",&d);
    printf("Now the program will calculate the Root of \nasin(x)= %lf between %lf & %lf with the precision of %lf\n",c,a,b,d);
    y1 = asin(a) - c;//asin(a)-c
    y2 = asin(b) - c;//asin(a)-c
    printf("y1=%lf\ny2=%lf\n",y1,y2);
    
    
    if(y1 * y2 > 0)
    {
        printf("There is no roots between the Chosen values,Please enter New values\n");
        return main();
    }
    while((b - a) > d){//calculation for root
        n++;
        x = (a + b) / 2;
       
        if(y1 * (asin(x) - c) > 0){
        a = x;}
        else{
        b = x;
        printf("%d steps :asin(%lf)=%lf\n",n,a,y1);
        printf("x = (%lf)\t asin(%lf)\t",x,asin(x));
        printf("asin(%lf)= %lf\n",b,asin(x));
        }}
    printf("The root is x = %lf,asin(x)= %lf ",x,asin(x) - c);
    return 0;
}
