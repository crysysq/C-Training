#include <stdio.h>

int main()
{
	double x,y;
	char buffer[100];
	char *p;

	p = buffer;
	p--;
	*p = 65;

	scanf("%lf %lf",&x,&y);

	sprintf(buffer, "%lf", x);
	if(x == y)
		{
			printf("EQ\n");
		}
	else
		{
			printf("NOT EQ\n");
		}

	return 0;
}
