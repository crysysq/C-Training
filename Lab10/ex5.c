#include <stdio.h>


int eqcuv(char *cuv, char **tablou)
{
    int index = 0;
    int j = 0;
    int i = 0;
    while(tablou[i] != 0)
    {
//        printf("%s\n",tablou[i]);
        while(tablou[i][j] != 0)
        {
            if(cuv[j] != tablou[i][j] )
            {
                break;
            }
            
//           printf("%c\n",cuv[j]);
//            printf("%c\n",tablou[i][j]);
            j++;
        }
        if(cuv[j] == 0)
        {
            return 1;
        }
        j = 0;
        i++;

        
    }

    return 0;
}

int main(void) 
{
	char *tablou[100] = {"curs1", "curs2", "curs3"};
	char *cuv1 = "curs2", *cuv2 = "curs5";



    printf("curs2 %s in tablou\n",(eqcuv(cuv1, tablou)) ? "este" : "nu este");
	printf("curs5 %s in tablou\n",(eqcuv(cuv2, tablou)) ? "este" : "nu este");	
}