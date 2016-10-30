#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*--- DEFINICIÓN DE FUNCIONES ---*/

//Función para calcular el mcd
int (*cmd)(double, double);

//Función para generar un número aleatorio
double (*rand_num)(double *);

/*Generamos un número primo usando la función de generar números aleatoriamente y el teorema de Eratostenes 
para verificar si es primo*/
double (*rand_prime)(double, double (*)(double *), double (*)(*double));

//Recibe un número y verifica si este es primo													   
double (*prime)(double *)

//Función para generar las claves públicas y privadas
void func_claves_publica_privada(double *, double *, double *, double *,	
	double (*)(double, double ),	
	double (*)(double *),
	double (*)(double *),	
	double (*)(double *, double (*)(double *), double (*)(double *)))

int main(){
	int opc;//Opción del usuario
	double p, q, d, e, n;

	printf("1) Generar claves publica y privada\n
			2) Codificar el mensaje\n
			3) Decodificar el mensaje\n
			4) Salir");
	scanf("%d",&opc);

	switch (opc){
		case 1:
			/*func_claves_publica_privada(*p, *q, *d, *e, *n);*/
		case 2:
			//func_texto2numero();
		case 3:
			//func_numero2texto();
		default:
			return 0;
	}
}