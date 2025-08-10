#include<stdio.h>
int main()
{
    int Gross,Net,ALLOWANCE,DEDUCTION;
    printf("Enter Gross Salary");
    scanf("%d",&Gross);
    ALLOWANCE= 0.1*Gross;
    DEDUCTION= 0.03*Gross;
    Net = Gross-ALLOWANCE-DEDUCTION;
    printf("%d-%d-%d=%d RUPEES",Gross,ALLOWANCE,DEDUCTION,Net);
    return 0;
}
