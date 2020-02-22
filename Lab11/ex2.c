#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void print(int** mat,int nr_linii,int nr_coloane)
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
	int **matrix_inferior;
	int **matrix_superior;
	int **matrix_result;


    int i,j,k,n;

   	printf("Enter number of Rows and Cols :");
    scanf("%d",&n);
  
	matrix_inferior = malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		matrix_inferior[i] = malloc((i+1)*sizeof(int));    

    for(i=0;i< n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix_inferior[i][j]);
        }
    }
	
	matrix_superior = malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		matrix_superior[i] = malloc((n-i)*sizeof(int));    

    for(i=0;i< n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix_superior[i][j]);
        }
    }
	
	matrix_result = malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		matrix_result[i] = calloc(n,sizeof(int));    


	for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
			    for(k = 0; k < i+1; k++)
				{
					if(k < )
					matrix_result[i][j] += matrix_inferior[i][k] * matrix_superior[k][j];
				}
		
			}
			
		}
    
	print(matrix_result, n ,n);




	for(i=0;i<n;i++)
		free(matrix_inferior[i]);
	free(matrix_inferior);

	for(i=0;i<n;i++)
		free(matrix_superior[i]);
	free(matrix_superior);

	for(i=0;i<n;i++)
		free(matrix_result[i]);
	free(matrix_result);
}
