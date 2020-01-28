#include <stdio.h>



void recursive(int i){
    
    printf("%d\n",i);
    
    if(i==0){
        return;
    }
//    printf("%d\n",i);
    return recursive(--i);
}






int main()
{
    printf("Hello World!\n");
	
	recursive(11);

    return 0;
}


