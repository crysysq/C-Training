#include <stdio.h>
#define DIMENSION 50;

int main()
{
	int v[50];
	int *p;
	int N,i;

	scanf("%d",&N);
	while(N <= 0 || N > 50)
	{
		printf("Introduceti o noua dimensiune\n");
		scanf("%d",&N);
	}
	for(i = 0; i < N; i++)
	{
		scanf("%d", &v[i]);
	}
	for(i = 0; i < N; i++)
	{
		printf("Al %d-lea element este %d\n", i+1, v[i]);
	}
	p = v;
	while(p-v<N)
	{
		printf("Al %d-lea element este %d\n", (p-v)+1, *p);
		p++;
	}
	for(p=v;p-v<N;p++)
	{
		printf("Al %d-lea element este %d\n", (p-v)+1, *p);
	}
}
