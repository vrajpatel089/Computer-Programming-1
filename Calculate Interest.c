#include <stdio.h>
int main()
{
    float P,R,N,I;
    printf("Enter Principle Value:");
    scanf("%f",&P);
    printf("Enter Rate of Interest");
    scanf("%f",&R);
    printf("Enter Number of years");
    scanf("%f",&N);
    I= P*R*N/100.0;
    printf("(%f*%f*%f)/100 = %f ",P,R,N,I);
    return 0;
}
