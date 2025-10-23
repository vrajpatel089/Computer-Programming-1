#include<stdio.h>
int main()
{
    int a,b=0,c,n,i,j,m;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n-1],A[n];
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
    printf("\nEnter the value you wish to remove: ");
    scanf("%d",&m);
    int x=0;
    for(i=0;i<n;i++)
    {
        if (arr1[i]==m)
        {
            x=i;
            break;
        }
        arr2[i]=arr1[i];
    }
    for(j=0;j<n;j++)
    {
        i=0;
        if(arr2[i]==arr1[i])
        {
            A[j]=arr2[i];
        }
        i++;
    }
    printf("\nNew Array:\t");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}
