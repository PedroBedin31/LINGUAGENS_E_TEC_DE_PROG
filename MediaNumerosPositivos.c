 #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numero, i, soma, negativo;
	float media;
	
	i = 0;
	soma = 0;
	negativo = 0;
	
	while (i < 10 ){
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if (numero < 0){
			negativo++;
		}else{
			soma = soma + numero;
		}
		i++;
	}
	
	media = 10 - negativo;
	media = soma/media; 
	
	printf("Soma: %d", soma);
	printf("\nMedia: %f", media);
	
	return 0;
}
