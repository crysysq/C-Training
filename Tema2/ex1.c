#include <stdio.h>
#include <string.h>


char *uppercase(char *str)
{

    
    int i = 0;
	




  	for(i=0; i<= 20; i++)
	 	{
	 	if(str[0] > 96 && str[0] < 123)
 // 		printf("%d\n",str[i]);
            {
                str[0]=str[0]-32;
            } 
  		else if(str[i]>=65&&str[i]<=90)
 // 		printf("%d\n",str[i]);
            {
                str[i]=str[i]+32;
            }
	  	}
 //   printf("%s\n", str);

    return str;
}





int main()
{
	char sir[100] = "trecE lebăDA pe ape";

	printf("%s\n", uppercase(sir));

  /*	for(int  i=0; i<= 7; i++)
	 	{
  		if(sir[i]>=65&&sir[i]<=90)
        sir[i]=sir[i]+32;
	  	}
    printf("%s\n", sir);*/
	return 0;
	//else if(n < 91 && n > 64)
}
