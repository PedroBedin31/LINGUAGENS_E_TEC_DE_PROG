#include <stdio.h>
#include <stdlib.h>

//Exercicio 1


int main(int argc, char *argv[]) {
	
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11, soma1, resto1, verificador1, resto2, soma2, verificador2;
	
	printf("Digite seu CPF: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dig10, &dig11);
	
	printf("CPF: %d%d%d%d%d%d%d%d%d%d%d",dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11);
	
	soma1 = (dig1 * 10) + (dig2 * 9) + (dig3 * 8) + (dig4 * 7) + (dig5 * 6) + (dig6 * 5) + (dig7 * 4) + (dig8 * 3) + (dig9 * 2);
	soma2 = (dig1 * 11) + (dig2 * 10 ) + (dig3 * 9) + (dig4 * 8) + (dig5 * 7) + (dig6 * 6) + (dig7 * 5) + (dig8 * 4 ) + (dig9 * 3) + (dig10 * 2);
	
	resto1 = soma1 % 11;
	resto2 = soma2 % 11;
	
    if (resto1 < 2) {
    	verificador1 = 0;
    }else {
        verificador1 = 11 - resto1;
    }

    if (resto2 < 2) {
        verificador2 = 0;
    }else {
        verificador2 = 11 - resto2;
    }
    
     if ((verificador1 == dig10) && (verificador2 == dig11)) {
        printf("\nO CPF e valido!\n");
    }else {
        printf("\nO CPF e invalido!\n");
    }


	return 0;
}

//Exercicio 2 

int main() {

    char medida_de_entrada;
    int temperatura_celsius, temperatura_fahrenheit;

    printf("Digite a medida de entrada (C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &medida_de_entrada);

    if(medida_de_entrada == 'C' || medida_de_entrada == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%d", &temperatura_celsius);
        temperatura_fahrenheit = (temperatura_celsius * 9 / 5) + 32;
        printf("A temperatura de %dC em Fahrenheit e: %dF \n", temperatura_celsius, temperatura_fahrenheit);
    } else if(medida_de_entrada == 'F' || medida_de_entrada == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%d", &temperatura_fahrenheit);
        temperatura_celsius = (temperatura_fahrenheit - 32) * 5 / 9;
        printf("A temperatura de %dF em Celsius e: %dC \n", temperatura_fahrenheit, temperatura_celsius);
    }

    return 0;
}

//exercicio 3

#define AZUL "\033[34m"
#define VERDE "\033[32m"
#define VERMELHO "\033[31m"
#define RESET "\033[0m"

int main() {

    int nota1, nota2, nota3;
    float media, calculo;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    calculo = 70 - media;

    if (media >= 70 && media <= 100) {
        printf(AZUL "Aprovado\n" RESET);
    } else if (media >= 40 && media < 70) {
        printf(VERDE "Exame\n" RESET);
        printf("Nota necessaria para aprovacao: %.2f\n", calculo);
    } else if (media >= 0 && media < 40) {
        printf(VERMELHO "Reprovado\n" RESET);
    } else {    
        printf(VERMELHO "Nota invalida\n" RESET);
    }

    return 0;
}

