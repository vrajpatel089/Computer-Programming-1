#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[100];
    printf("Enter a word  :\n");
    scanf("%s",A);
    strlwr(A);
    printf("The word in all lower case is %s",A);
}
