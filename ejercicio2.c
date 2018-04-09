
#include <stdio.h>

int main()
{
	int x, cuadrado, cubo;
	printf("Generador de numeros al cuadrado y al cubo de enteros positivos:\n");
	printf("Ingrese su numero:\n");
	scanf("%d",&x);
	cuadrado=x*x;
	cubo=x*x*x;
	printf("El cuadrado del numero introducido es:%d",cuadrado);
	printf("\n");
	printf("El cubo del numero introducido es:%d",cubo);
	return 0;
}

