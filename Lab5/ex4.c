#include <stdio.h>
 
void printProduct(int arr[], int n){
    long prod = 1;
    int i=0;
    for(i=0; i<n; i++){
	printf("%d\n",arr[i]);
        prod *= arr[i];
    }
    
    printf("produs = %ld\n",prod);
}

int main()
{
    int i, n;
    
    printf("introduceti 1 numar intreg: \n");
    scanf("%d", &n);
    int v[n];
    
    printf("introduceti %d numere naturale: \n", n);
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
	//printf("%d\n",i);
    }
    
    printProduct(v, n);
    
    return 0;
}

