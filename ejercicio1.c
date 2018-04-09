
#include <stdio.h>

int main()
{
	printf("Entrega de matriculas y promedio de calificaciones:\n");
	int totaldenotas, codigodecarrera, anoingreso, numerodeseleccion;
	float c1 ,c2 ,c3 , suma, promedio;
	totaldenotas = 3;
	printf("Ingresar primera calificacion:");
	scanf("%f", &c1);
	printf("\n");
	printf("ingrese segunda calificacion:");
	scanf("%f", &c2);
	printf("\n");
	printf("ingrese tercera calificacion:");
	scanf("%f", &c3);
	printf("\n");
	suma = c1+c2+c3;
	promedio=suma/totaldenotas;
	printf("Ano de ingreso:");
	scanf("%d", &anoingreso);
	printf("Ingrese el codigo de su carrera:");
	scanf("%d", &codigodecarrera);
	printf("Ingrese el numero de que fue seleccionado en su universidad:");
	scanf("%d", &numerodeseleccion);
	printf("Su numero de matricula es:%d,%d,%d", anoingreso, codigodecarrera, numerodeseleccion);
	printf("\n");
	printf("Su promedio de notas es: %.1f", promedio);
	return 0;
}
	


	
	
	
	
	
	


