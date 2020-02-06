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




int eq_mask(char *sir, char *masca)
{
	int i = 0;
	if (str_length(sir) == str_length(masca))
	{
		while(masca[i] != 0)
		{
			if (masca[i] == '?')	
			{	
				i++;				
				continue;
			}			
				else if(masca[i] != sir[i])
			{
				return 0;
			}
			i++;
		}		
		return 1;
	}
	else
	{
		return 0; 
	}
}


int main()
{
	char sir[MAX] = "asdfgfv";
	char masca[MAX] = "asd??fv";

	if(eq_mask(sir, masca) == 1)
		printf("OK\n");
	else 
		printf("not ok\n");
	
}
