#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    printf("Enter value c: ");
    scanf("%d",&c);
    if ((a>b)&&(a>c))
    {
        printf("%d is the largest number of the two",a);
    }
    if ((b>a)&&(b>c))
    {
         printf("%d is the largest number of the two",b);
    }
    if ((c>a)&&(c>b))
    {
         printf("%d is the largest number of the two",c);
    };
    return 0;
}

