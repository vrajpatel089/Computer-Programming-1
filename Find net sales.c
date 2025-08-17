#include<stdio.h>
int main()
{
    int Gross,discount,Net;
    printf("Enter Gross Sales value: ");
    scanf("%d",&Gross);
    if (Gross>=20000.0)
    {
        discount= 0.15*Gross;
        Net= Gross - discount;
        printf("Net Sales= %d = %d - %d ",Net,Gross,discount);
    };
     if ((Gross>=10000.0)&&(Gross<20000.0))
    {
        discount= 0.1*Gross;
        Net= Gross - discount;
        printf("Net Sales= %d = %d - %d",Net,Gross,discount);
    };
     if ((Gross<10000.0)&&(Gross>0.0))
    {
        discount= 0.05*Gross;
        Net= Gross - discount;
        printf("Net Sales= %d = %d - %d ",Net,Gross,discount);
    };
    return 0;
}
