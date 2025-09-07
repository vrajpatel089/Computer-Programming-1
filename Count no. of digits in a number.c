#include <stdio.h>
int main()
{
   int a,b=0;
   printf("Enter a number: ") ;
   scanf("%d", &a);
   if(a==0)
   {
       b=1;
   }
   else
   {
       for(;a!=0;a/10)
       {
            a=a/10;
            b++;
       }
   }
   printf("Number of digits = %d",b);
   return 0;

}



