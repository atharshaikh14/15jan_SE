#include<stdio.h>
int main()
{
 int ar[10],i,max=0;
 printf("enter 10 values\n");
 for(i=0;i<10;i++)
  scanf("%d",&ar[i]);
 
 max=ar[0];
 for(i=1;i<10;i++)
 {
  if(max<ar[i])
   max=ar[i];
 }
 
 printf("Maximum value of Array: %d",max);
}

