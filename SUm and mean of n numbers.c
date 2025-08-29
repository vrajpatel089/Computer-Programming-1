#include <stdio.h>

int main()
{
    int i,a,sum,N;
    sum=0;
    float mean;
    printf("Enter value of N: ");
    scanf("%d",&N);
    printf("Enter N numbers:\n");
    for(i = 1; i <=N; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
    }
    mean = sum/N;
    printf("Sum = %d\n", sum,N);
    printf("Mean = %.2f\n", mean);
    return 0;
}
