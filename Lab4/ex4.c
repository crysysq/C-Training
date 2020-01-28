#include<stdio.h>

//se citeste un nr de la tastatura; sa se afiseze cel mai mic nr palindrom citit de la tastatura



int power(int nr,int pwr)
{
	int a;
	if(pwr==0)
		return 1;
	a= nr*power(nr,pwr-1);

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
	int a;	
	if(nr<10)
		return nr;

	
	a = (nr%10)*power(10,nrCifre(nr/10))+invers(nr/10);
	return a;
}

int minPalindrom(int nr)
{
	if(nr==invers(nr))
		return nr;
	return minPalindrom(++nr);
	

}

int main()
{
	int nr;
	scanf("%d",&nr);
	printf("%d\n",minPalindrom(nr));
}
