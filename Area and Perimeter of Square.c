#include <stdio.h>
int main()
{
    float A,L,P;
    printf("Enter Length Value:");
    scanf("%f",&L);
    P=4*L;
    printf("Perimeter 4*%f=%f unit\n",L,P);
    A=L*L;
    printf("Area %f*%f=%f unit squared\n",L,L,A);
    return 0;
}
