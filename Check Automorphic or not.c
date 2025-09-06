#include<stdio.h>
int main ()
{
    int a,b=0,c,d,s;
    printf("Enter a number:");
    scanf("%d",&a);
    d=a;
    for (; a != 0; a = a / 10)
        {
            b++;
        }
        s=d*d;
        c = 1;
        for (int i = 0; i < b; i++)
            {
        c = c * 10;
            }
        if(s%c==d)
            printf("The number is automorphic.");
            else
            printf("The number is not automorphic.");
        return 0;
}
