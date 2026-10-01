#include <stdio.h>
#include <stdlib.h>

void ex0_prova1(){
	
	int num1, num2, num3, num4, impar;
	
	printf("Digite 4 valores: ");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	impar = num1 % 2;
	
	if (impar == 1) {
		printf("O numero %d e impar", num1);

	}else{
		printf("O numero %d nao e impar", num1);
	}
    
    impar = num2 % 2;
	
	if (impar == 1) {
		printf("O numero %d e impar", num2);

	}else{
		printf("O numero %d nao e impar", num2);
	}
    
    
    impar = num3 % 2;
	
	if (impar == 1) {
		printf("O numero %d e impar", num3);

	}else{
		printf("O numero %d nao e impar", num3);
	}
    
    impar = num4 % 2;

    if (impar == 1) {
		printf("O numero %d e impar", num4);

	}else{
		printf("O numero %d nao e impar", num4);
	}
    
	
	if (num1 % 5 == 0){
		printf("O numero %d e multiplo de 5", num1);
	}
	
	if (num2 % 5 == 0){
		printf("O numero %d e multiplo de 5", num2);
	}
	 
	if (num3 % 5 == 0) {
		printf("O numero %d e multiplo de 5", num3);
	}
    
	if (num4 % 5 == 0) {
		printf("O numero %d e multiplo de 5", num4);
	}

}

void ex1_prova1(){
	
	int quant_mochilas, cap_mochila, itens;
	
	printf("Digite a capacidade de cada mochila: ");
	scanf("%d", &cap_mochila);
	
	printf("Digite a quantidade de itens: ");
	scanf("%d", &itens);
	
	quant_mochilas = itens / cap_mochila + itens % cap_mochila;
	
	printf("A quantidade de mochilas necessarias e: ", quant_mochilas);
	
}

void ex2_prova1() {

    int op;
    float f, c, k, m, mi, kg, lb, mph, kmh;

    printf("Qual conversao deseja realizar? 0 a 11 (exceto 6 e 7): ");
    scanf("%d", &op);

    switch (op) {

        case 0:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &c);

            f = c * 1.8 + 32;

            printf("O valor em Fahrenheit e: %f\n", f);
            break;

        case 1:
            printf("Digite o valor em Fahrenheit: ");
            scanf("%f", &f);

            c = (f - 32) / 1.8;

            printf("O valor em Celsius e: %f\n", c);
            break;

        case 2:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &c);

            k = c + 273.15;

            printf("O valor em Kelvin e: %f\n", k);
            break;

        case 3:
            printf("Digite o valor em Kelvin: ");
            scanf("%f", &k);

            c = k - 273.15;

            printf("O valor em Celsius e: %f\n", c);
            break;

        case 4:
            printf("Digite o valor em metros: ");
            scanf("%f", &m);

            mi = m / 1609.34;

            printf("O valor em milhas e: %f\n", mi);
            break;

        case 5:
            printf("Digite o valor em milhas: ");
            scanf("%f", &mi);

            m = mi * 1609.34;

            printf("O valor em metros e: %f\n", m);
            break;

        case 8:
            printf("Digite o valor em quilogramas: ");
            scanf("%f", &kg);

            lb = kg * 2.205;

            printf("O valor em libras e: %f\n", lb);
            break;

        case 9:
            printf("Digite o valor em libras: ");
            scanf("%f", &lb);

            kg = lb / 2.205;

            printf("O valor em quilogramas e: %f\n", kg);
            break;

        case 10:
            printf("Digite o valor em km/h: ");
            scanf("%f", &kmh);

            mph = kmh / 1.609;

            printf("O valor em milhas por hora e: %f\n", mph);
            break;

        case 11:
            printf("Digite o valor em milhas por hora: ");
            scanf("%f", &mph);

            kmh = mph * 1.609;

            printf("O valor em quilometros por hora e: %f\n", kmh);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }
}

void prova1(){
	
	int exercicio;
	printf("Digite o exercicio da primeira prova que deseja resolver(0 | 1 | 2): ");
	scanf("%d", &exercicio);
	
	switch(exercicio){
		case 0:
			ex0_prova1();
		break;
		
		case 1:
			ex1_prova1();
		break;
		
		case 2:
			ex2_prova1();
		break;
	}
}
// NÂO CONSEGUI TERMINAR O RESTO EM SALA :(
