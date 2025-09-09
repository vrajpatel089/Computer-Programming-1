#include <stdio.h>
int main()
{
    int n, actual, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    actual = n; // here we are storing the value of original number as it is going to be changed in the loop after running
    for (;n > 0; n = n / 10)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder; //here after 1st remainder the value of reversed will be equal to the remainder
         // and in the next iteration it will be equal to the last 2 digits of the number reversed
    }

    if (actual == reversed)
        printf("%d is a palindrome number\n", actual);
    else
        printf("%d is not a palindrome number\n",actual);

    return 0;
}

