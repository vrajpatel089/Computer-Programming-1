#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    printf("Enter element for 3x3 array: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("You entered:\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d", arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}
