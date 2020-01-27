#include <stdio.h>

int main()
{
    int pal = 121;
    
    
    printf("%d", pal%10);

    pal = pal/10;
    
    printf("%d", pal%10);

    return 0;
}