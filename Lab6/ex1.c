#include <stdio.h>

void swap(int* var_1, int* var_2)
{
	int var;
	var = *var_1;
	*var_1 = *var_2;
	*var_2 = var;
	printf ("Adresa lui a in functie: %p\n",var_1);
	printf ("Adresa lui b in functie: %p\n",var_2);
	printf ("%d\n",var_2-var_1);
}

int main()
{
	int a, b;
	a = 2;
	b = 5;
	
	printf ("Valoarea lui a este: %d\n",a);	
	printf ("Valoarea lui b este: %d\n",b);

	printf ("Adresa lui a este: %p\n",&a);
	printf ("Adresa lui b este: %p\n",&b);

	swap(&a,&b);

	printf ("Valoarea lui a este: %d\n",a);	
	printf ("Valoarea lui b este: %d\n",b);
	
	printf ("Adresa lui a este: %p\n",&a);
	printf ("Adresa lui b este: %p\n",&b);	
}
