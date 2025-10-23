#include<stdio.h>
void main()
{
    int a=8,b=16,c;
    int *aptr,*bptr ;
    aptr= &a;
    bptr= &b;
    printf("Value of a is: %d\n",*aptr);
    printf("Value of b is: %d\n",*bptr);
    c= *aptr;
    *aptr = *bptr;
    *bptr = c;
    printf("New Value of a after swapping is: %d\n",*aptr);
    printf("New Value of b after swapping is: %d\n",*bptr);
}


