#include<stdio.h>
int main()
{
    int a,i=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a==0)
    {
        printf("The number of digits in the given number are 1.");
        return 0;
    }
    for(;a>0;a=a/10)
    {
        i++;
    }
    printf("The number of digits in the given number are %d.",i);
    return 0;
}
