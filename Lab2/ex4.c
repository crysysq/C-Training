#include <stdio.h>
#include <unistd.h>

int main()
{
	//scrieti un program care numara descrescator de la 3 la 1 si dupa afisati starti si sa afiseze la interal de o secunda
	int i;

	for(i=3;i>0;i--)
	{
		
		printf("%d\n",i);
		sleep(1);
	}	
	printf("START!\n");
	

	return 0;
}
	
