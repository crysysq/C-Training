#include <stdio.h>
#include <math.h>

int palindrom(int pal)
{
    int temp = pal, mirror = 0, k=0;
    while(temp > 0)
    {
        k = temp% 10;
        mirror = (mirror*10) + k;
        temp = temp/10;
        
    }
    if(pal == mirror){
//        return 1;
    printf("%d\n", pal);
    } else {
        return 0;
    }
    
}


int main()
{
    int P, K,max, min, i, j;
    scanf("%d %d", &P, &K);
    max = pow(10,P);
    min = pow(10,P-1);
    printf("%d\n", max);
    printf("%d\n", min);
    for(i = min; i < max; i++){
        for(j = min; j < max; j++){
            palindrom(i*j);
//                printf("numerele %d si %d formeaza %d", i, j, (i*j));
            }
        }
        
    
//    palindrom(123);

    return 0;
}
