#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char palavra[30];
	int i, inicio, j, palindromo;
	
	inicio = 0;
	
	scanf("%s", &palavra);
	printf("Inserido %s", palavra);
	printf("\n");
	
	for(i=0; i<30 && palavra[i] != '\0' ;i++);
	for(j=i-1, i=0; i<j; i++, j--){
		if (palavra[i] == palavra[j]) palindromo = 1;
		else palindromo = 0;
	    break;
	}
	
	if(palindromo) printf("eh palindromo");
	else printf("Nao eh palindromo");
	
	return 0;
}
