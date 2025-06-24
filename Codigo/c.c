#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int longitud;

	printf("Ingrese una cadena para calcular su longitud\n");
	gets(a);

	longitud = strlen(a);

	printf("Longitud = %d\n", longitud);

	return 0;
}