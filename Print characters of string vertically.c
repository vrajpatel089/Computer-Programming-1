#include <stdio.h>
#include<string.h>
void main()
{
    int i,n;
    char A[100];
    printf("Enter A  :\n");
    scanf("%s",A);
    n=strlen(A);
    for(i=0;i<n;i++)
    {
        printf("%c\n",A[i]);
    }
}
