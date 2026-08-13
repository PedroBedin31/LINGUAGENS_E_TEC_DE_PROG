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
    
	return 0;

}


