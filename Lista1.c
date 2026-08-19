#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

//exercicio 1
  
	int num1,num2,aux;
	
	printf("\nPrimeiro numero: ");
	scanf("\n%d", &num1);
	printf("\nSegundo numero: ");
	scanf("%d", &num2);
	
	aux = num1;
	num1 = num2;
	num2 = aux;

// exercicio 2 

    printf(" %d \n %d\n ", num1, num2);
	
    double valor;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %.2e\n", valor); 

//exercicio 3  
  
    int numero1, numero2, numero3, numero4, numero5, numero6, numero7, resto1, resto2, resto3, resto4, resto5, resto6;
    
    printf("\nDigite o numero: ");
    scanf("%d", &numero1);
    
    numero2 = numero1 / 2;
    resto1 = numero1 % 2;
    
    numero3 = numero2 / 2;
    resto2 = numero2 % 2;
    
    numero4 = numero3 / 2;
    resto3 = numero3 % 2;

    numero5 = numero4 / 2;
    resto4 = numero4 % 2;
    
    numero6 = numero5 / 2; 
    resto5 = numero5 % 2; 
    
    numero7 = numero6/ 2;
    resto6 = numero6 % 2;
    
    printf("%d%d%d%d%d%d", resto6, resto5, resto4, resto3, resto2, resto1);

// exercicio 4

    float salario, total_vendas, total_final;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o total de suas vendas: ");
	scanf("%f", &total_vendas);
	
	total_final = total_vendas * 1.15 + salario;
	printf("\nO seu ganho total no final do mes foi: %.2f", total_final);

// exercicio 5 

	float valor1, valor2, valor3, valor4, media, multiplicacao;
	
	printf("Digite um valor: ");
    scanf("%f", &valor1);
    
    printf("\nDigite um valor: ");
    scanf("%f", &valor2);
    
	printf("\nDigite um valor: ");
    scanf("%f", &valor3);
    
	printf("\nDigite um valor: ");
    scanf("%f", &valor4);
    
	printf("\nA multiplicacao de %f x %f x %f x %f = %.2f", valor1, valor2, valor3, valor4, multiplicacao);
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	printf("\nA media de tudo e %.2f", media);

//exercicio 6
	
    int dias, meses, anos; 
    
    printf("Quantos dias voce viveu? ");
    scanf("%d", &dias);
	
	anos = dias / 365;
	meses = dias / 30;
	
	printf("\nVoce viveu %.1d dias.", dias);
	printf("\nVoce viveu %.1d meses.", meses);
	printf("\nVoce viveu %.1d anos.", anos);

//exercicio 7

	float pi, area, raio;
    pi = 3.14159;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

	area = 4 * pi * raio * raio * raio / 3; 
	
	printf("A area do circulo e: %.2f", area);

//exercicio 8

	int x1, y1, x2, y2, distancia;
    
    printf("Digite seu x1: ");
    scanf("%d", &x1);
    
    printf("Digite seu y1: ");
    scanf("%d", &y1);
	
	printf("Digite seu x2: ");
    scanf("%d", &x2);
    
    printf("Digite seu y2: ");
    scanf("%d", &y2); 
    
    distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    printf("A distancia entre x e y é: %d", distancia);
	
	return 0;

}


