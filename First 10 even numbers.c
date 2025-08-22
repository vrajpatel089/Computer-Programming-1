#include<stdio.h>
int main()
{
int N,a;
printf("Enter any numerical value ");
scanf("%d",&N);
printf("The first 10 even numbers are numbers are:\n");
for(a=1;a<=20;a++)
{
    if(a%2==0)
    {
    printf("%d \n",a);
    }
}
return 0;
}
