#include<stdio.h>
int main()
{
    int N,D;
    printf("Enter value of number : \n");
    scanf("%d",&N);
    printf("Enter value of Divisor: \n");
    scanf("%d",&D);
    if (N%D==0)
        printf("The number is divisible by %d\n",D);
    else
        printf("The number is not divisible by %d\n",D);

}

