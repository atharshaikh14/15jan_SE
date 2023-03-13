#include<stdio.h>
main()
{
	int a,b;
	printf("enter two numbers a and b");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d",a,b);
	
}
