#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value a: ");
    scanf("%d",&a);
    printf("Enter value b: ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is the largest number of the two",a);
    }
    if (b>a)
    {
         printf("%d is the largest number of the two",b);
    };
    return 0;
}
