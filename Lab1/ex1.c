#include <stdio.h>
#include <math.h>

int main()
{
	double x,y,max;
	scanf("%lf %lf",&x,&y);
	if(fabs(x)>fabs(y))
	{
		printf("max = %lf\n",fabs(x));
	}
	else
	{
		printf("max = %lf\n",fabs(y));
	}
	return 0;

}
