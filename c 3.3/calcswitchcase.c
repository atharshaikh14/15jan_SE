#include <stdio.h>

int main() 
{
char op;
int a,b;
printf("enter +,-,/,* \n");
scanf("%c",&op);
printf("enter values of a and b");
scanf("%d %d",&a,&b);

switch(op)
{
	case'+':
		printf("%d+%d=%d",a,b,a+b);
		break;
	case'-':
		printf("%d-%d=%d",a,b,a-b);
		break;
	case'/':
		printf("%d/%d=%d",a,b,a/b);
		break;
	case'*':
		printf("%d*%d=%d",a,b,a*b);
		break;
	default:
		printf("operator is not available\n");
			
}
}

