#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) { 

// Área do circulo

	float raio,area;
	
	printf("\nRaio do circulo e: ");
	scanf("%f", &raio);
	
	area = pi * raio * raio;
	printf("\nA area do circulo e: %f", area);

    printf("Agora a area do trapezio")

// Área do trapézio
		
	float base_maior,base_menor,altura,area;
	
	printf("Altura do Trapezio: ");
	scanf("%f", &altura);

	printf("Base Maior: ");
	scanf("%f", &base_maior);
	
	printf("Base Menor: ");
	scanf("%f", &base_menor);
	
	area = (base_maior + base_menor) * altura / 2;
	printf("Area do trapezio: %f", area);
		
	return 0;
}
