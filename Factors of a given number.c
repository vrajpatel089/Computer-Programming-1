#include<stdio.h>
int main ()
{
    int Number,a,b,c;
    printf("Enter Number Value:");
    scanf("%d",&Number);
    for(a=1;a<=Number;a++)
        if (Number%a==0)
    {
        printf("%d\n",a);
    }
return 0;
}
