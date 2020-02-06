#include <stdio.h>
#define MAX 100

int str_length(char *s)
{
	int count = 0;
	while(s[count] != '\0')
	{
				
		count++;
		
	}
	
	return count;
}

int main()
{
	char *s = "1351etse";
	
	printf("%s \n %d\n", s, str_length(s));


}

