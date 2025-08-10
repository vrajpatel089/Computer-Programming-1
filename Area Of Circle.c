#include<stdio.h>
int main()
{
    float A,R,Pi;
    printf("Enter Radius Value");
    scanf("%f",&R);
    Pi= 22.0/7.0;
    A = Pi*R*R;
    printf("Area %.2f*%0.2f*%0.2f=%.2f\n",Pi,R,R,A);
    return 0;
}

