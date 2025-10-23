#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[100];
    printf("Enter a word  :\n");
    scanf("%s",A);
    strupr(A);
    printf("The word in all upper case is %s",A);
}

