#include<stdio.h>
int main()
{
    int a,b=0;
    for (a=1;a<=100;a++)
    {
        if(a%13==0)
        {
            b=b+a;
        }
    }
    printf("%d\n",b);
    return 0 ;
}

