#include <stdio.h>

int main()
{
    int N, a, b, c=0;

    for (N = 2; N <= 500; N++)
    {
        b = 1;

        for (a = 2; a <= N/2; a++)
        {
            if (N % a == 0)
            {
                b = 0;
                break;
            }

        }
        if (b==1)
                c=c+N;
    }
    printf("%d",c);
    return 0;
}

