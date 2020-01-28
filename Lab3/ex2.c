#include <stdio.h>

// de la tastatura se introduc mai multe nr pozitive, terminate printr-un nr negativ, dupa fiecare nr introdus se va afisa lista div lui nebanali sau textul prim; la sfarsit se va afisa nr de nr prime gasite


void div_nebanali(int val)
{
	int j, ;
	int prim = 1;
	for(j=2;j<=val/2;j++)
	{
		if(val%j==0)
		{			
			sumaDiv += j;
			prim = 0;
		}
		
	}	
	if(prim==1)
		
	printf("prim");

	printf("\n");
}




int main()
{
	int nr = 1;
	while(nr>0)
	{
			
		scanf("%d", &nr);
		if(nr>0)
			div_nebanali(nr);
		
		printf("\n");
	}
		


}
