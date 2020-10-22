# RTR-105
Computer training(basic Course) Electronic noteboke

Recording1

Recording2  
Recording3






EXample
#include <stdio.h>
int main()
{
    char a = 5;
    char b = 10;
    char c = a + b;
    // +
    printf("a+b=%d\n",a+b);
    printf("%d + %d = %d\n",a,b,c);
    // /
    char d = a / b; // char / char -> char
    printf("%d / %d = %d\n",a,b,d);
    float dd = a / b; // char / char -> char
    printf("%d / %d = %d\n",a,b,dd);
    printf("%d / %d = %f\n",a,b,dd);
    float aa = 5;
    dd = aa / b;
    dd = d;
    printf("%f / %d = %f\n",aa,b,dd);
    
    printf ("(float)%d / %d = %f\n",a,b, (float)a/ b );
    printf("(float)a / b - show result as bytes - %d\n", sizeof((float)a / b));
    
    printf("1. * %d / %d = %f\n",a,b,1. * a / b);
    printf("1. * a / b - show result as bytes - %d\n", sizeof(1. * a/ b));
    // %
       char e = a % b;
       //printf("%D \% %d = %d\n"a,b,e);
       printf("%d %c %d = %d\n",a,37,b,e);
       printf("%d %c %d = %d\n",a,0x25,b,e);
       printf("%d %c %d = %d\n",a,'%',b,e);
       printf("%d %c %d = %d\n",999,'%',990,999%990);//9
       printf("%d %c %d = %d\n",999,'%',1990,999%1990);//999

    return 0;
}
///////////////////////////////////
