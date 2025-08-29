#include<stdio.h>
int main()
{
int a,b,c=0,d;
printf("Enter Number: ");
scanf("%d",&b);
d=b;
while(b>0)
{
    a=b%10;
    c=c+ (a*a*a);
    b=b/10;
}
if(c==d)
    printf("It is an Armstrong Number\n");
    else
        printf("Not an Armstrong number");
return 0;
}
