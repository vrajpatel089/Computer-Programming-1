#include <stdio.h>
int main()

{
    float a,b,c,d,e;
    printf("Enter Bytes Value:");
    scanf("%f",&a);
    b=1024;
    c= a/b;
    d= c/b;
    e= d/b;
    printf("%f / %f = %f kilobytes\n",a,b,c);
    printf("%f/%f = %f megabytes\n",b,c,d);
    printf("%f/%f = %f gigabytes\n",b,d,e);
    return 0;
}
