#include "functie.h"

void f1(int i)
{
	printf("suma lui %d si %d este %d", i , i + 1, f2(i , i + 1));
	printf("Patratul lui %d este %d\n", i, f3(i));
}

int f2(int i, int j)
{
	return i + j;
}

static int f3(int i)
{
	return i*i;
}
 
