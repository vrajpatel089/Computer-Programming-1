#include<stdio.h>
int main()
{
    int Net_Sales,Discount,Gross;
    printf("Enter Gross Sales");
    scanf("%d",&Gross);
    Discount= 0.1*Gross;
    Net_Sales = Gross-Discount;
    printf("Net Sales = %d-%d=%d RUPEES",Gross,Discount,Net_Sales);
    return 0;
}

