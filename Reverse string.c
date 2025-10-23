#include <stdio.h>
#include<string.h>
void main()
{
    char A[100];
    printf("Enter A  :\n");
    scanf("%s",A);
    strrev(A);
    printf("Reversed A :\n%s",A);
}
