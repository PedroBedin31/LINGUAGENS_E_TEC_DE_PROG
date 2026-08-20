int main(int argc, char *argv[]) {

//exercicio 1 
  
	int ano_nascimento, ano_atual, idade;
	
	printf("Digite a idade que completa esse ano: ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
	printf("O ano do seu nascimento e: %d ", ano_nascimento);

//exercicio 2

	float kilometros_hora, metros_segundo;
	
	printf("Digite a quantos km/h esta: ");
	scanf("%f", &kilometros_hora);
	
	metros_segundo = kilometros_hora / 3.6;
	
	printf("Voce esta a %1.f km/h e a %1.f m/s ", kilometros_hora, metros_segundo);
	
//exercicio 3

  float real, dolar;
	
  printf("Digite seu valor em reais: ");
  scanf("%f", &real);
    
  dolar = real / 5.19;
    
  printf("Seu valor em reais e %2.f, e em dolar e %2.f!", real,  dolar);

//exercicio 4 
  
  float celsius, fahrenheit;
    
  printf("Digite a temperatura em celsius: ");
  scanf("%f", &celsius);

  fahrenheit = celsius * 9/5 + 32;
	
	printf("A temperatura em fahrenheit e: %.1f °F.", fahrenheit); 

//exercicio 5

  float graus, radianos, pi;
  pi = 3,141592;
    	
  printf("Digite os graus: ");
  scanf("%f", &graus);
    
  radianos = graus * pi/180;
    
  printf("Os radianos sao: %2.f", radianos);
  
//exercicio 6

  int numero, antecessor, sucessor;
    
  printf("Digite um numero: ");
  scanf("%d", &numero);
    
  antecessor = numero -1;
  sucessor = numero + 1;
    
  printf("o numero e %d, o antecessor e %d, e o sucessor e %d!", numero, antecessor, sucessor);
  
//exercicio 7

  float premio, primeiro, segundo, terceiro; 
    
  premio = 780000;
  primeiro = premio * 0.46;
  segundo = premio * 0.32;
  terceiro = premio * 0.22;
    
  printf("O premio total = %f;\nO primeiro ganhou %.2f; \nO segundo ganhou %.2f; \nO terceiro ganhou %.2f!", premio, primeiro, segundo, terceiro);

//exercicio 8

  int tempo, horas, minutos, segundos;
  
  printf("Digite o tempo de duracao do evento em segundos: ");
  scanf("%d", &tempo);
   
  horas = tempo / 3600;
  minutos = (tempo % 3600) / 60;
  segundos = tempo % 60;
   
  printf("%d:%d:%d", horas, minutos, segundos);

//exercicio 9

 int tempo, velocidade;
 double distancia, litros;
 
 printf("Digite o tempo gasto: ");
 scanf("%d", &tempo);
 printf("Agora digite a velocidade: ");
 scanf("%d", &velocidade);
 distancia = tempo * velocidade;
 litros = distancia / 12.0;
 
 printf("%.3lf ", litros);

  
	return 0;
}
