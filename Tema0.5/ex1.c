#include <stdio.h>

char tipar(char n)
{
	char a;
	
	if(n>96 && n < 123)
		{
		a = n - 32;
		return printf("%c\n",a);
		}
	else if(n < 91 && n > 64)
		{
		return printf("%c\n",n);
		}
	else 
		{
		return printf(" \n");
		}
}


char main()
{
	char n;   
	scanf("%c",&n);
	tipar(n);
	return 0;
}
