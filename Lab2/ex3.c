#include <stdio.h>

int main()
{
	// se citesc 3 nr, se verifica daca pot fi lungimile segmentului unui triunghi
	int x,y,z;
	scanf("%d\n",&x);
	scanf("%d\n",&y);
	scanf("%d",&z);
	if(x < (y+z) &&  y < (x+z) && z < (x+y))
	{
		printf("Triunghi\n");
	}else{
		printf("Nu triunghi\n");
	}

	
	

	return 0;
}
