#include<stdio.h>
char main()
{
  char Name[100],a;
  int N;
  printf("Enter Your Name :");
  scanf("%s",&Name);
  printf("Enter value of N: ");
  scanf("%d",&N);
  for(a=1;a<=N;a++)
  {
      printf("%s\n",Name);
  };
  return 0 ;
}

