#include<stdio.h>
int main()
{
    int N,a;
    printf("Enter value of number : \n");
    scanf("%d",&a);
    printf("Enter value of N : \n");
    scanf("%d",&N);
    if (a%N==0)
        printf("The number is divisible by %d\n",N);
    else
        printf("The number is not divisible by %d\n",N);

}
