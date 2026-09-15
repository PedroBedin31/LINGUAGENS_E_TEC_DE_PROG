#include <stdio.h>
#include <stdlib.h>

// Exercicio 5

int calc_notas(int *valor, int *notas100, int *notas50, int *notas20, int *notas10, int *notas5, int *notas2, int *notas1) {
    
    *notas100 = *valor / 100; 
    *valor = *valor % 100;  

    *notas50 = *valor / 50; 
    *valor = *valor % 50;

    *notas20 = *valor / 20;
    *valor = *valor % 20;

    *notas10 = *valor / 10;
    *valor = *valor % 10;

    *notas5 = *valor / 5;
    *valor = *valor % 5;

    *notas2 = *valor / 2;
    *valor = *valor % 2;

    *notas1 = *valor / 1;
    *valor = *valor % 1;

    return 0; 
}


int main() {

    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    printf("Digite o valor: ");
    scanf("%d", &valor);

    calc_notas(&valor, &notas100, &notas50, &notas20, &notas10, &notas5, &notas2, &notas1);

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}


// Exercicio 6, LAÇO DE REPETIÇÃO????

// exercicios 7 e 8

float calc_inss(float salario){	
	if(salario <= 1412.00) return salario * 0.075;
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.00) return salario * 0.12;
	else return salario * 0.14;	
}

float calc_irpf(float salario_base){
	float salario;
	salario_base = salario - calc_inss(salario);
	
	if(salario_base <= 2259.20) return salario_base;
	else if(salario_base > 2259.20 && salario_base <= 2836.65) return (salario_base * 0,075) - 169.44;
	else if(salario_base > 2836.65 && salario_base <= 3751.05) return (salario_base * 0,15) - 381.44;
	else if(salario_base > 3751.05 && salario_base <= 4664,68) return (salario_base * 0.225)- 662.77;
	else return (salario_base * 0.275) - 896.00;
}

int main(int argc, char *argv[]) {
	
	float salario, salario_base, desconto_inss, desconto_irpf;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	desconto_inss = calc_inss(salario);
	desconto_irpf = calc_irpf(salario_base);
	
	printf("O desconto do INSS e: %f ", desconto_inss);
	printf("O desconto total do Imposto de renda e: %f", desconto_irpf);
	
	return 0;
}
