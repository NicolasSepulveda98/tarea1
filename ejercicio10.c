
#include <stdio.h>

int main()
{
	int costo_boleto,costo_kilometro;
	float kilometros;
	printf("Ingrese cantidad de kilometros por recorrer:\n");
	scanf("%f",&kilometros);
	printf("Ingrese  valor por kilometro:\n");
	scanf("%d",&costo_kilometro);
	costo_boleto=kilometros*costo_kilometro;
	printf("El costo del boleto es:%d pesos",costo_boleto);
	return 0;
}

