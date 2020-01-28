#include <stdio.h>

int div(int numar)
{
	int j;
	int sumaDiv = 0;
	int prim = 1;
	for(j=2;j<=numar/2;j++)
	{
		if(numar%j==0)
		{			
			sumaDiv += j;
			prim = 0;
		}
		
	}	

	return sumaDiv;
	if(prim==1)
		return 0;
}

int pereche(int a, int b)
{
	if((a == div(b)) && (b == div(a)) && (a>b))
	{
		printf("( %d , %d )\n", a, b);
	}
	return 0;
}

void testPrint(int a, int b)
{
	if((a == div(b)) && (b== div(a)) && (a>b))
			
	
		printf("%d %d", a, b);

}

int main()
{
	int nr1, nr2, N;
	scanf("%d", &N);
	
	for(int i=1 ; i<N; i++)	
	{
//		if(div(div(i)) == i)
//			printf("%d %d \n", i, div(i));
	


 		for(int j=1; j < N; j++)
		{
			pereche(i,j);
		}	
	}	



		
			pereche(nr1,nr2);
			testPrint(nr1, nr2);

	
		


}
