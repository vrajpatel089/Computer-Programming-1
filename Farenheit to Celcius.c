#include <stdio.h>
int main()
{
    float F,C,a,b;
    printf("Enter Farenheit Value:");
    scanf("%f",&F);
    a=5.0/9.0;
    b=32.0;
    C= (F-b)*a ;
    printf("(%f-%f)*%f =%f Celcius",F,b,a,C);
    return 0;
}
