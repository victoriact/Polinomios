#include <stdio.h>
#include "pol.h"

main ()
{
	POLINOMIO p,q;
	int grado;

	printf("Grado del primer polinomio: ");
	scanf("%d", &grado);
	printf("Coeficientes del primer polinomio: ");
	p = leer_polinomio(grado);
	printf("Grado del segundo polinomio: ");
	scanf("%d",&grado);
	printf("Coeficientes del segundo polinomio: ");
	q = leer_polinomio(grado);

	printf("Resultado de la suma.\n");
	escribir_polinomio(simplificar_polinomio(sumar_polinomio(p, q)));
	printf("\n");
	printf("Resultado de la multiplicacion.\n");
	escribir_polinomio(simplificar_polinomio(multiplicar_polinomio(p, q)));
	printf("\n");
}
