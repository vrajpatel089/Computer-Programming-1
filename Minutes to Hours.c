#include <stdio.h>
int main()


{
    float a,b,c;
    printf("Enter Minutes Value");
    scanf("%f",&a);
    b=60;
    c= a/b;
    printf("%f/%f = %f hours",a,b,c);
    return 0;
}
