#include <stdio.h>

int div(int numar)
{
	int j;
	int sumaDiv = 0;
	int prim = 1;
	for(j=1;j<=numar/2;j++)
	{
		if(numar%j==0)
		{	
//		    printf("%d", sumaDiv);
			sumaDiv += j;
			prim = 0;
		}
		
	}	
//    printf("%d", sumaDiv);
	return sumaDiv;
	if(prim==1)
		return 0;
}

int pereche(int a, int b)
{
	if((a == div(b)) && (b == div(a)) && (a<b))
	{
		printf("(%d, %d)\n", a, b);
		
	}
	return 0;
}
int pereche2(int a)
{
	if((a == div(div(a))) && (a<div(a)))
	{
		printf("(%d, %d)\n", a, div(a));
		
	}
	return 0;
}



int main()
{
	int nr1, nr2, N;
	scanf("%d", &N);
	
	for(int i=1; i < N; i++)	
	{
//	    for(int j=1; j < N; j++)
//		{
//		   
//		}	
    pereche2(i);

	}	
		


}

