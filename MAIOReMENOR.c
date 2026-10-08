#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b){
	if (a > b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
	
	int valores[10];
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}

	for(i=1, maior = valores[0]; i<5; i+=2){
		int temp = compara(valores[i], valores[i+1]);
		maior = compara(maior, temp);
	}
	
	printf("Maior numero: %d", maior);
	
	return 0;
}
