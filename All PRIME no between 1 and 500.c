#include <stdio.h>

int main()
{
    int N, a, b;

    for (N = 2; N <= 500; N++)
    {
        b = 1;  // reset flag for each new number

        for (a = 2; a <= N/2; a++)
        {
            if (N % a == 0)
            {
                b = 0;   // not prime
                break;
            }
        }

        if (b == 1)
            printf("%d\n", N);
    }

    return 0;
}
