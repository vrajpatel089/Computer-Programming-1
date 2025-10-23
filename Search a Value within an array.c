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
    printf("\nEnter the value you want to search: ");
    scanf("%d",&m);
    int x=0;
    for(i=0;i<n;i++)
    {
        if(arr1[i]==m)
            x++;
    }
    printf("%d was found %d times in the array",m,x);
    return 0;
}
