#include <stdio.h>

int main()
{
    int pal = 123;
    
    
    printf("%d", pal%10);

    pal = pal/10;
    
    printf("%d", pal%10);

    return 0;
}