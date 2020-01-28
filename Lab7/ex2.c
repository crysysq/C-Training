#include <stdio.h>
#define MAX 100

int sort(int max, int *v)
{
	int val, pos, count=0;
	for(int i = 1; i < max; i++)
	{
		val=v[i];
		pos=i;
		while(pos>0 && val<v[pos-1])
		{
			v[pos]=v[pos-1];
			pos--;
			count++;
		}
		v[pos]=val;
	}
		
	for(int i = 0; i < max; i++)
	{
		printf("%d ", v[i]);
	}		

		return count;
	
}


int main()
{

	int v[MAX];
	int max;

	scanf("%d", &max);
	for(int i = 0; i < max; i++)
	{
		scanf("%d", &v[i]);
	//	printf("%d", v[i]);
	
	
	
	}
	
	printf("\n");
	for(int i = 0; i < max; i++)
	{
		printf("%d ", v[i]);
	}		
	printf("\n");
	sort(max, v);
}





