#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter Number: ");
    scanf("%d",&b);
    while(b>0)
    {
        a=b%10;
        c=c+a;
        b=b/10;
    }
    printf("Sum of digits is %d\n",c);
    return 0;
}

