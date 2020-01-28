#include <stdio.h>

// sa se returneze nr de cifre a unui nr intreg

int nrCifre(int nr)
{
	
	if(nr/10==0)
		return 1;
	return 1+nrCifre(nr/10);
}

int main()
{
	int nr;
	scanf("%d",&nr);
	printf("%d\n",nrCifre(nr));
	return 0;
}

