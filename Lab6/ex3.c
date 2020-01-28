#include <stdio.h>
#define DIMENSION 100

/* sa considera un vector x cu n<100 componente. 
 sa se determine:
	a. valoarea componentei maxime	
	b. valoarea componentei minime
	c. media aritmetica a componentelor
	d. numarul de componente mai mare ca media aritmetica
*/


int main()
{
	int v[DIMENSION];	
	int i, N;
	int max = v[0], min = v[0];
	double ma = 0;
	scanf("%d",&N);
	
	for(i = 0; i < N ; i++)
	{
		scanf("%d", &v[i]);
	}
	max = v[0];
	min = v[0];
	for(i = 0; i < N; i++)
	{
		ma += v[i] ;
		if(v[i] > max)
			max = v[i];
		if(v[i] < min)
			min = v[i];
	
	}
	ma = ma/N;
	for(i = 0; i < N; i++)
	{
		if(v[i] > ma)
			printf("%d ",v[i]);
	}
	
	printf("\n%d\n",max);
	printf("%d\n",min);
	printf("%lf\n",ma);
}
