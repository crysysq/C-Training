#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	double n, radacina, i;
	scanf("%d %d",&a,&b);
	for(i=a; i<=b; i++)
		{
//		printf("%lf\n",i);
		radacina =  sqrt(i);
		n = (int)radacina;
		if(radacina==n)
			printf("%lf\n",i);
		}
	return 0;
	
	
}
