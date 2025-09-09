#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter Number: ");
    scanf("%d",&b);
    while(b>0)
    {
        a=b%10; //to get last digit of number
        c=c+a; //to add the remainder to 0
        b=b/10; //to remove the last digit of the number 
    } //this wil get the remainder add it to zero then remove the last digit and then again repeat the same process until th number becomes zero
    printf("Sum of digits is %d\n",c);
    return 0;
}


