#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter 5 numbers :- ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c &&a>d && a>e)
	{
		printf("%d is max ",a);
	}
	else if( b>c &&b>d && b>e)
	{
		printf("%d is max ",b);
		
	}
	else if( c>d && c>e)
	{
		printf("%d is max ",c);
	}	
	else if( d>e)
	{
		printf("%d is max ",d);
	}
	else
	{
	printf("%d is max",e);
	}	
}
