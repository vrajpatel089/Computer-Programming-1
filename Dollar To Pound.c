#include <stdio.h>
int main()

{
    float a,b,c;
    printf("Enter Dollar Value:");
    scanf("%f",&a);
    b=0.75;
    c= a*b;
    printf("%f * %f = %f pounds",a,b,c);
    return 0;
}

