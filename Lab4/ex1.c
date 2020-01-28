#include <stdio.h>





int power(int nr,int pwr)
{
	int a;
	if(pwr==0)
		return 1;
	a= nr*power(nr,pwr-1);
	printf("Se iese din functia apelata cu parametrii %d, %d\n",nr,pwr);
	return a;
}

int main()
{
	int nr,pwr;
	scanf("%d %d",&nr,&pwr);
	
	printf("%d\n",power(nr,pwr));
	
	return 0;

}
