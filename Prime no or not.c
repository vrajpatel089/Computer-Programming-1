#include<stdio.h>
int main()
{
    int N,a,b;
    printf("Enter Number: ");
    scanf("%d",&N);
    for(a=2;a<=N/2;a++)
    {
        if(N%a==0)
        {
            printf("%d is not a prime number",N);
            return 0 ;
        }
    }
    printf("%d is a prime number",N);
    return 0;
}

