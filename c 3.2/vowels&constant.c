#include<stdio.h>
main()
{
	char c;
	printf("enter Alphabetes");
	scanf("%c",&c);
	
	switch(c){
	
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U': printf("%c is vowel\n",c);
	break;
	default:printf("%c is constant",c);
}
}
