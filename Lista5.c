#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// EXERCICIO 1

int Ex_01(int argc, char *argv[]) {
	
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

// exercicio 2

  int Ex_02(){	
    double valor;
	int expoente;
	
	expoente = 0;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    while (valor >= 10){
    	valor = valor / 10;
    	expoente++;
	}
	
	printf("Valor em notação cientifica: %.2lf x 10^%d", valor, expoente);
    
    return 0;
}
