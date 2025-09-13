#include<stdio.h>
void main()
{
    int arr[]={5,3,2,1,4},a,b,c,d ,n;
    n=5;
    printf("Original Array: ");
    for(a=0;a<n;a++)
    {
        printf("%d\t",arr[a]);
    }
    printf("\n");
    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n-a-1;b++)
        {
            if(arr[b]<arr[b+1])
            {c=arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=c;}
        }
    }
    printf("Final array:    ");
    for(d=0;d<n;d++)
            {
                printf("%d\t",arr[d]);
            }
}

