#include <stdio.h>
int main()
{
    int i,a,P=0,N=0,O=0;
    for (int i = 1; i < 11; i++)
    {
        printf("Enter number %d :",i);
        scanf("%d",&a);
        if (a > 0)
        {
            P++;
        } else if (a < 0) {
            N++;
        } else {
            O++;
        }
    }
    printf("\n--- Results ---\n");
    printf("Positive numbers: %d\n", P);
    printf("Negative numbers: %d\n", N);
    printf("Zeroes: %d\n", O);
    return 0;
}
