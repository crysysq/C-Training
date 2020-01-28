#include <stdio.h>


void f3(int nivel)
{
	if(nivel == 0)
		return ;
	printf("_");
	return f3(nivel - 1);
}






void f1(int x)
{
	if(x == 0)
	{	
		
		return;
	}	
	printf("*");
	return f1(x-1);
}

void f2(int y, int n)
{
	if(y > n)
	{
		return;
	}
	f3(n-y);
	f1(2*y - 1);
	f3(n-y);
	printf("\n");
	return f2(y+1,n);
}








int main()
{
	int n;
	printf("nr este");
	scanf("%d",&n);
	f2(1,n);

	return 0;	
}
