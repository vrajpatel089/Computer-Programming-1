#include<stdio.h>
int main()
{
    int a,b=0,c,n,i,j;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n-1];
    printf("Enter value of elements for Array : \n");
    for(i=0;i<n;i++)
    {
        printf("Value %d : \n",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Original Array:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i+1];
    }
    printf("\nNew Array:\t");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}

