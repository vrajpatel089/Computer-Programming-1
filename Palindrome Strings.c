#include<stdio.h><string.h>
void main()
{
   char W[100],A[100];
   printf("Enter the word: ");
   scanf("%s",W);
   strcpy(A,W);
   strrev(A);
   if (strcmp(A,W)==0)
    printf("The word is a palindrome.");
   else
    printf("The word is not a palindrome.");
   return 0;
}
