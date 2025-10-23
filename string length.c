#include <stdio.h>
#include<string.h>
void main()
{
    char A[100];
    int B;
    printf("Enter a word  :\n");
    scanf("%s",A);
    B=strlen(A);
    printf("Length of the word is %d",B);
}
