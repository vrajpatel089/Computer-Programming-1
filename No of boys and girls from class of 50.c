#include<stdio.h>
int main()

{
    int i,B=0,G=0;
    char sex;
    printf("Enter sex code for 50 students: M for boys and F for girls: \n");
    for(i=1;i<=50;i++)
    {
        printf("Student %d: ",i);
        scanf(" %c",&sex);
        if(sex=='M')
            B++;
            else if (sex=='F')
            G++;
        else
            printf("Enter Valid input.\n");
    }
    printf("The number of boys are %d\n",B);
    printf("The number of girls are %d\n",G);
}
