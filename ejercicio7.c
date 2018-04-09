#include <stdio.h>
int main ()
{
	int dia;
	float segundos;
	dia= 86400;
	printf("Transformador de dias a segundos \n")
	printf("Ingrese cantidad de dias: \n");
	scanf("%i", &dia);
	segundos= dia*86400;
	printf("la cantidad de segundos que hay en sus dias son: %.2f", segundos);
	return 0;
}
