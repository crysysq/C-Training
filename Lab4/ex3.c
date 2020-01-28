#include <stdio.h>

int power(int nr,int pwr)
{
	int a;
	if(pwr==0)
		return 1;
	a= nr*power(nr,pwr-1);
//	printf("Se iese din functia apelata cu parametrii %d, %d\n",nr,pwr);
	return a;
}
int nrCifre(int nr)
{
	
	if(nr<10)
		
		return 1;
		
	return 1+nrCifre(nr/10);
}



int invers(int nr)
{
	
	if(nr<10)
		return nr;

	//printf("%d\n", nr);
	
	return (nr%10)*power(10,nrCifre(nr/10))+invers(nr/10);
}

int main()
{
	int nr;
	scanf("%d",&nr);
	printf("%d\n",invers(nr));
}
