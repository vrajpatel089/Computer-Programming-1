#include<stdio.h>
int main()
{
    int Gross,allowance,deduction,Net;
    printf("Enter Gross Salary value: ");
    scanf("%d",&Gross);
    if (Gross>10000.0)
    {
        allowance= 0.1*Gross;
        deduction= 0.03*Gross;
        Net= Gross - allowance - deduction;
        printf("Net Salary= %d = %d - %d - %d",Net,Gross,allowance,deduction);
    }
     if (Gross>5000.0)
    {
        allowance= 0.07*Gross;
        deduction= 0.02*Gross;
        Net= Gross - allowance - deduction;
        printf("Net Salary= %d = %d - %d - %d",Net,Gross,allowance,deduction);
    }
    return 0;
}


