#include <stdio.h>

short checkIfEqual(int a, int b){
          
    if(a==b){ 
        return 1;
    }
      
    return 0;
}

int main()
{
    
    int x,y;
    printf("introduceti 2 numere:\n");
    scanf("%d%d",&x,&y);
    
    printf("%s", checkIfEqual(x,y) == 1 ? "numerele sunt egale\n" : "numerele NU sunt egale\n" );
 
    return 0;
}
