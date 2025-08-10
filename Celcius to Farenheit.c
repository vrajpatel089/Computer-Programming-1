#include <stdio.h>
int main()
{
    float F,C,a,b;
    printf("Enter Celcius Value:");
    scanf("%f",&C);
    a=9.0/5.0;
    b=32.0;
    F= (C*a)+b ;
    printf("(%f*%f)+ %f = %f Farenheits",C,a,b,F);
    return 0;
}
