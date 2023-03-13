#include<stdio.h>
main()
{
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if(year%4==0){
		printf("its a leap year");
	}
	else{
		printf("not a leap year");
	}
}
