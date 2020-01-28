#include <stdio.h>



// se citeste de la tastatura un nr pozitiv si intreg n ; sa se scrie un program care determina care nr cuprins intre 2 si n are suma divizorilor nebanali maxim, daca exista mai multe se va afisa doar primu 


int div_nebanali(int val)
{
	int j;
	int suma=0;
	for(j=2;j<=val/2;j++)
	{
		if(val%j==0)
			suma+=j;
	}
	return suma;
}



int main()
{
	int n,i,aux,suma_max,val;
	val = 0;
	suma_max = -1;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		aux=div_nebanali(i);
//		printf("%d %d\n", aux, i);
		if(aux>suma_max)
		{
			suma_max=aux;
			val=i;
		}
			
	}
	
	printf("%d %d\n",val, suma_max);
	return 0;

}
