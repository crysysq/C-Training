#include <stdio.h>
#define MAX 100
char * strdel (char *s, int pos, int n)
{
	
		int i=pos;
		while(s[i+n] != '\0')
		{		
		s[i] = s[i+n];	
		i++;
		//printf("%c",s[i]);
		}

	s[i] = '\0';
	return s;


}

int main()
{
	char s[MAX] = "123qwerty";

//printf("%c", s[3]);
	printf("%s\n", strdel(s, 3, 1));

}
