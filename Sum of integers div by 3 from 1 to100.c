#include<stdio.h>
int main()
{
int a,b;
b=0;
for(a=1;a<=100;a++)
{
    if(a%3==0)
    {
        b=b+a;
    }
}
printf("Sum of multiples of 3 from 1 to 100 is : %d ",b);
return 0;
}

