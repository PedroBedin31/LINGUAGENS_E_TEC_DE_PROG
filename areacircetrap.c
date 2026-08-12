#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) { 

// Área do circulo

	float raio,area_circulo,base_maior,base_menor,altura,area_trapezio;
	
	printf("\nRaio do circulo e: ");
	scanf("%f", &raio);
	
	area_circulo = pi * raio * raio;
	printf("\nA area do circulo e: %f", area_circulo);

    printf("\nAgora a area do trapezio");

// Área do trapézio
		
	printf("\nAltura do Trapezio: ");
	scanf("%f", &altura);

	printf("\nBase Maior: ");
	scanf("%f", &base_maior);
	
	printf("\nBase Menor: ");
	scanf("%f", &base_menor);
	
	area_trapezio = (base_maior + base_menor) * altura / 2;
	printf("\nArea do trapezio: %f", area_trapezio);
		
	return 0;
}
