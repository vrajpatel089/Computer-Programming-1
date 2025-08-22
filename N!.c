#include<stdio.h>
int main()
{
int N,a,F;
printf("Enter value of N to get factorial value: ");
scanf("%d",&N);
F=1;
for(a=1;a<=N;a++)
{
    F=F*a;
}
printf("Factorial = %d ",F);
return 0;
}
