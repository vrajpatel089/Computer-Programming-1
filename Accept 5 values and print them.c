#include<stdio.h>
void main()
{
    int arr[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
