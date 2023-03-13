#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("enter the number of factorial you want\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the factorial of %d is %d",n,f);
}
