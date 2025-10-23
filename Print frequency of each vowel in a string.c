#include <stdio.h>
#include<string.h>
void main()
{
    char A[100],B[]="AEIOU";
    printf("Enter Word  :\n");
    scanf("%s",A);
    strupr(A);
    int a=0,i,b,j,N[5]={0,0,0,0,0};
    b=strlen(A);
    for(i=0;i<b;i++)
    {
        for(j=0;j<5;j++)
        {
          if(A[i]==B[j])
            N[j]++;
            break;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%c occurs %d time in the word. \n",B[i],N[i]);
    }
}
