#include <stdio.h>
int main()
{
    int n, actual, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    actual = n;
    for (;n > 0; n = n / 10)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
    }
    printf("The reversed number is: %d",reversed);
    return 0;
}

