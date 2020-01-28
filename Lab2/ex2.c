#include <stdio.h>

int main()
{
	//citim un nr intreg de la tastatura, sa se verifice daca e par prin doua metode diferite
	int x;
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("Numarul este par\n");
	}
	else
	{
		printf("Numarul nu este par\n");
	}

	if(x&1)
	{
		printf("Numarul nu este par\n");
	}
	else 
	{
		printf("Numarul este par\n");
	}



	return 0;
}
