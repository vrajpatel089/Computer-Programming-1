#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[100];
    printf("Enter a word  :\n");
    scanf("%s",A);
    strcpy(B,A);
    printf("String B is %s",B);
}

