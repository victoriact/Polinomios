#if !defined (_POL_H_)
#define _POL_H_

typedef struct{
	int grado;
	float *coef;
} POLINOMIO;

POLINOMIO crear_polinomio(int grado);
POLINOMIO leer_polinomio(int grado);
void escribir_polinomio(POLINOMIO p);
POLINOMIO multiplicar_polinomio(POLINOMIO p, POLINOMIO q);
POLINOMIO sumar_polinomio(POLINOMIO p, POLINOMIO q);
POLINOMIO simplificar_polinomio (POLINOMIO p);
#endif
