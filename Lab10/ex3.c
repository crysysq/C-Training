#include <stdio.h>
#define MAX 100
char * strins(char *s1, int pos, char *s2)
{
	char final[MAX];
	int i =0, j= 0, k=0;	

	while(pos!=0)
	{
		final[i] = s1[i];
		i++;		
		pos--;
	}
	k = i;
	while(s2[j] !='\0')
	{
		final[k] = s2[j];
		k++;
		j++;
	}
	while(s1[i] != 0)
	{
		final[k] = s1[i];
		k++;
		i++;
	}
	final[k] = 0;
	i = 0;
	while(final[i] != 0)
	{
		s1[i] = final[i];
		i++;
	}	
	s1[i] = 0;	
	return s1;


}


int main()
{
	char s1[MAX] = "123qwe";
	char s2[MAX] = "rty";

	printf("%s\n", strins(s1, 6, s2));

}
