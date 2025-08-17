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
    printf("Average = %d/3.0= %d Marks\n",Total,Average);
    if (Average>=70.0)
    {
       printf("The student has passed with distinction class.\n");
    };
    if ((Average>=60.0)&&(Average<70.0))
    {
       printf("The student has passed with first class.\n");
    };
    if ((Average>=50.0)&&(Average<60.0))
    {
       printf("The student has passed with second class.\n");
    };
    if ((Average>=35.0)&&(Average<50.0)&&(Physics>35)&&(Chemistry>35)&&(Maths>35))
    {
       printf("The student has passed with third class.\n");
    };
    if ((Physics<=35)||(Chemistry<=35)||(Maths<=35))
    {
        printf("The student has failed.\n");
    };
    return 0;
}

