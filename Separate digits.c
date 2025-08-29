#include<stdio.h>
int main()
{
int a,b;
printf("Enter Number: ");
scanf("%d",&b);
while(b>0)
{
    a=b%10;
    printf("%d\n",a);
    b=b/10;
}
return 0;
}

