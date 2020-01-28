#include <stdio.h>
#define MAX 20

/* Scrieţi un program pentru înmulţirea a două matrice, dacă aceasta este posibilă. Va trebui să implementaţi două funcţii:

    [1p] una pentru citirea unei matrice într-un tablou bidimensional, dat ca parametru.
    [2.5p] una care să realizeze efectiv înmulţirea a două matrice. 

	https://ocw.cs.pub.ro/courses/programare/laboratoare/lab06


*/


void citire(int mat[MAX][MAX], int nr_linii, int nr_coloane)
{
	int i,j;
	


	for(i = 0; i < nr_linii; i++ )
		for(j = 0; j < nr_coloane; j++)
			scanf("%d", &mat[i][j]);
			
	for(i = 0; i < nr_linii; i++ )
	{
		for(j = 0; j < nr_coloane; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

int produs(int mat1[MAX][MAX], int mat2[MAX][MAX], int mat[MAX][MAX], int nr_linii1, int nr_coloane1,  int nr_linii2, int nr_coloane2)
{
	int i, j ,k;

	if(nr_coloane1 == nr_linii2){

		for(i = 0; i < nr_linii1; i++)
		{
			for(j = 0; j < nr_coloane2; j++)
			{
			    for(k = 0; k < nr_coloane1; k++)
			    {
			    mat[i][j] += mat1[i][k] * mat2[k][j];
			    }
			}
		//	printf("%d", mat[i][j]);
		}
	}
}

void print(int mat[MAX][MAX],int nr_linii,int nr_coloane)
{
	int i,j;
	for(i = 0; i < nr_linii; i++ )
	{
		for(j = 0; j < nr_coloane; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

int main()
{
	int mat1[MAX][MAX], mat2[MAX][MAX], mat[MAX][MAX];
	int i,j, nl1, nc1, nl2, nc2;
	printf("Numarul de linii1: ");
	scanf("%d", &nl1);
	printf("Numarul de coloane1: ");	
	scanf("%d", &nc1);
 	printf("Numarul de linii2: ");
	scanf("%d", &nl2);
	printf("Numarul de coloane2: ");	
	scanf("%d", &nc2);
	citire(mat1, nl1, nc1);
	printf("************************\n");
	citire(mat2, nl2, nc2);
	printf("************************\n");
	produs(mat1, mat2, mat, nl1, nc1, nl2, nc2);
	printf("************************\n");
	print(mat, nl1, nc2);
}


	
