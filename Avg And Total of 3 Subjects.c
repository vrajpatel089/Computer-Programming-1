#include<stdio.h>
int main()
{
    int Physics,Chemistry,Maths,Total,Average;
    printf("Enter Maths Marks");
    scanf("%d",&Maths);
    printf("Enter Chemistry Marks");
    scanf("%d",&Chemistry);
    printf("Enter Physics Marks");
    scanf("%d",&Physics);
    Total= Physics + Maths + Chemistry;
    Average= Total/3.0;
    printf("Total = %d+%d+%d=%d Marks\n",Physics,Chemistry,Maths,Total);
    printf("Average = %d/3.0= %d Marks",Total,Average);
    return 0;
}

