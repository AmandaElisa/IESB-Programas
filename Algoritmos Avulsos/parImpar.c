#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um N�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("O N�mero � PAR!");
	}
	else{
		printf("O N�mero � IMPAR!");
	}
	
	return 0;
}
