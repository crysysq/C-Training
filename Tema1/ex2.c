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
        printf("este palindrom");
    } else {
        printf("nu este palindrom");
    }
    
}


int main()
{
    int P, K,max, min;
    scanf("%d %d", &P, &K);
    max = pow(10,P);
    min = pow(10,P-1);
    printf("%d\n", max);
    printf("%d\n", min);

    palindrom(121);

    return 0;
}