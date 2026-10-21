#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// EXERCICIO 1

int main(int argc, char *argv[]) {
	
	int numero[MAX], i, maior, aux, j;
	
	printf("Digite 100 numeros: \n");
	
	for (i = 0; i < MAX; i++){
		scanf("%d", &numero[i]);
	}
	
	printf("Invertida: \n");
	
	for (i = MAX; i > 0; i--){
		printf(" %d", numero[i - 1]);
	}
	
	printf("\nMaior para o menor: \n");
	
	
	for(i = 0; i < MAX; i++){
		for(j = i+1; j < MAX; j++){
			if (numero[i] < numero[j]){
				aux = numero[i];
				numero[i] = numero[j];
				numero[j] = aux;
			}
		}
	}
	for (i=0; i < MAX; i++){
		printf(" %d", numero[i]);
	}
	return 0;
}
