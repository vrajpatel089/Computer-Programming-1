#include<stdio.h>
int main ()
{
    int Number,a;
    printf("Enter Number Value:");
    scanf("%d",&Number);
    a= Number/7.0;
    if (Number%7==0)
    {
        printf("The Number is divisible by 7");
    }
    else
    {
            printf("The Number is not divisible by 7");
    }

return 0;

}
