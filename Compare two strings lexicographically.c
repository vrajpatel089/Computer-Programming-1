#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[100];
    int a,b;
    printf("Enter A  :\n");
    scanf("%s",A);
    printf("Enter B  :\n");
    scanf("%s",B);
    strupr(A);
    strupr(B);
    if (strcmp(A,B)==0)
        printf("Both the strings are equal lexicographically\n");
    else
    printf("Both the strings are not equal lexicographically\n");
}
