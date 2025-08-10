#include<stdio.h>
int main()
{
    float A,B,H;
    printf("Enter Height Value");
    scanf("%f",&H);
    printf("Enter Base Length Value");
    scanf("%f",&B);
    A = 0.5*B*H;
    printf("Area o.5*%0.2f*%0.2f=%.2f\n",B,H,A);
    return 0;
}
