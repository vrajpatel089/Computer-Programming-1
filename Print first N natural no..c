#include<stdio.h>
int main()
{
int N,a;
printf("Enter value of N to print N natural numbers: ");
scanf("%d",&N);
printf("The first %d Natural numbers are:\n",N);
for(a=1;a<=N;a++)
{
    printf("%d \n",a);
}
return 0;
}
