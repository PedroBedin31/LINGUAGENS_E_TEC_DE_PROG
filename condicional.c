#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// Maior ou menor
  
	int a, b, c, r;
	
	printf("Entre os valores A, B, C");
	
	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a > b) {
		r = a;
	}else{
		r = b;
	}

	if (c > r){
		r = c;
	}
	
	printf("O maior numero e: %d", r);

// par ou impar
  
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf(" %d e par", numero);
	}else{
		printf(" %d e impar", numero);
	}
	
	return 0;
		
}
