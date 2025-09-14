#include<stdio.h>
void main()
{
    int arr[5],a,b,c,d,n,i;
    n=5;
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for(a=0;a<n;a++)
    {
        printf("%d\t",arr[a]);
    }
    printf("\n");
    for(a=0;a<n;a++)
    {
        for(b=0;b<n-a;b++)
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

