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

    if (actual == reversed)
        printf("%d is a palindrome number\n", actual);
    else
        printf("%d is not a palindrome number\n",actual);

    return 0;
}
