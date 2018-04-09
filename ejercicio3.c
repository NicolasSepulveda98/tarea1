#include <stdio.h>
int main()
{
	float cateto1, cateto2;
	float a, b, c;
	
	printf("Generador de hipotenusas \n");
	printf("Ingrese el valor del cateto 1: \n");
	scanf("%f", &cateto1);
	printf("Ingrese el valor del cateto 2: \n");
	scanf("%f", &cateto2);
	a= cateto1*cateto1;
	b= cateto2*cateto2;
	c= a+b;
	printf("El valor de la hipotenusa es: raiz de %.2f",c);
	return 0;
}
	
