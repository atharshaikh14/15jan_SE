#include<stdio.h>
main()
{
	float height,base,area ;
	printf("Enter base and height of a triangle\n");
			scanf("%f %f", &base, &height);
			
			area = (1.0/2) * base * height;
			
			printf("Area of Triangle:\t%f\n", area);
}
