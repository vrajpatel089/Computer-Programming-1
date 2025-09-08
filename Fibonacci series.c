#include <stdio.h>

int main() {
    int  p = 0, c= 1, n, i,a;

    printf("Enter the number of terms: ");
    scanf("%d", &a);

    if (a >= 1)
        {
        printf("%d, ",p);
        }
    if (a >= 2)
        {
        printf("%d", c);
        }

    for (i = 3; i <= a; i++)
        {
        n = p + c;
        printf(", %d", n);
        p = c;
        c = n;
        }
    return 0;
}
