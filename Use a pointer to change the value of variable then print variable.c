#include<stdio.h>
void main()
{
    int a=8,b=10;
    printf("Value of a is: %d\n",a);
    int *ptr ;
    ptr=&b ;
    printf("Updated Value of a is: %d",*ptr);
}
