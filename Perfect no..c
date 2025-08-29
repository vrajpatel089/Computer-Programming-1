#include<stdio.h>
int main ()
{
    int Number,a,c=0;
    printf("Enter Number Value:");
    scanf("%d",&Number);
    for(a=1;a<=Number/2.0;a++)
    {
        if (Number%a==0)
        c=c+a;
    }
    if(c==Number)
    printf("%d is a perfect number",Number);
    else
    printf("%d is not a perfect number",Number);
return 0;
}

