#include <stdio.h>
 

long main()
{
    long sum = 0;
    long n, i;
    printf("introduceti N:\n");
    scanf("%ld", &n);
    
    for(i = n ; i > 0; i--)
        sum += i;

    printf("suma primelor %ld numere este %ld\n", n, sum);
    return 0;
}

