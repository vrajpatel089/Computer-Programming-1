#include <stdio.h>
int main()
{
    float A,L,B,P;
    printf("Enter Length Value:");
    scanf("%f",&L);
    printf("Enter Breadth Value:");
    scanf("%f%",&B);
    P=2.0*(L+B);
    A=L*B;
    printf("Perimeter 2*(%f+%f)=%f unit\n",L,B,P);
    printf("Area %f*%f=%f unit squared\n",L,B,A);
    return 0;
}
