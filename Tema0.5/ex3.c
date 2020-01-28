#include <stdio.h>


int star1(int n)

{
	if(n==0)
	{
		return 1;
	}
	printf("%.*s",n,"*************************************");
	printf("\n");
	return star1(n-1);
}

int star2(int n)

{
	int max = n+ 1;
	if(n==0)
	{
		return 1;
	}
	printf("%.*s",n-1,"                   ");	
	printf("%.*s",n,"*****************");
	
	
	printf("\n");
	return star2(n-1);
}


int main()

{
	int n;
	scanf("%d",&n);
	star1(n);
	printf("\n");
	star2(n);		
}
