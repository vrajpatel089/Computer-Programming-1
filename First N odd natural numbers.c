#include<stdio.h>
int main()
{
int N,a;
printf("Enter value of N to print N odd natural numbers: ");
scanf("%d",&N);
printf("The first %d odd Natural numbers are:\n",N);
for(a=1;a<=N;a++)
{
    if(a%2==!0)
    {
    printf("%d \n",a);
    }
}
return 0;
}
