#include<stdio.h>
main()
{
	int days ,years ;
	printf("enter a days ");
	scanf("%d",&days);
	years=days/365;
	days=(days%365)%7;
	printf("years=%d\n",years);
	printf("days=%d\n",days);
}
