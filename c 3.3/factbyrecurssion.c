#include<stdio.h>
int fact(int);
int main()
{
  int n;
  printf("Type any value : ");
  scanf("%d",&n);
  n=fact(n);
  printf("\nFactorial : %d ",n);
  return 0;
}
int fact(int x)
{
  if(x==1)
    return(x);
  else
   x=x*fact(x-1);
}

