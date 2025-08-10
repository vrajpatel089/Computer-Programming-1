#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a=%d b=%d\n",a,b);
    return 0;
}
