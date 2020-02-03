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
        return pal;
//    printf("%d\n", pal);
    } else {
        return 0;
    }
    
}


int main()
{
    int P, K,max, min, i, j, nr = 0;
    scanf("%d %d", &P, &K);
    max = pow(10,P);
    min = pow(10,P-1);
//    printf("%d\n", max);
//    printf("%d\n", min);
    for(i = 1; i < K; i++){
        for(j = 1; j < K; j++){
            if(((palindrom(i) * palindrom(j)) >= min) && ((palindrom(i) * palindrom(j)) < max))
                {
               // printf("numerele %d si %d formeaza %d \n", i, j, (i*j));
                nr++;
                }
            }
        }
        
    
//    palindrom(123);

    printf("%d", nr);
    return 0;
}

