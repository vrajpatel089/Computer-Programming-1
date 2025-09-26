#include<stdio.h>
void main()
{
    int N,a,b=0,d,c,i,arr[]={1,2,5,10,20,50,100,200,500};
    printf("Enter the number: ");
    scanf("%d",&N);
    a=N;
    d=N;
    for(i=8;i>=0;i--)
    {
        c=a/arr[i];
        a=a%arr[i];
        b=b+c;
        printf("No. of notes of %d used: %d\n",arr[i],c);
    }
}
