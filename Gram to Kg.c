#include <stdio.h>
int main()

{
    float a,b,c;
    printf("Enter Gram Value:");
    scanf("%f",&a);
    b=1000;
    c= a/b;
    printf("%f / %f = %f kilograms",a,b,c);
    return 0;
}
