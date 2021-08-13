#include <stdio.h>


int main()
{
	int multiplicacion;
	int i;
	
	printf("Introduzca el numero que desea multiplicar: ");
	scanf("%i", &multiplicacion);
	
	for(i=1; i<=10; i++)
	{
		printf("\n %i * %i = %i ", multiplicacion, i, multiplicacion * i);
		
	}
	
	
	
return 0;
	
}
